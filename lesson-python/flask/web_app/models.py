from flask_sqlalchemy import SQLAlchemy
from sqlalchemy.orm import relationship,backref
from flask_security import UserMixin, RoleMixin

db = SQLAlchemy()

# Define models
roles_users = db.Table('roles_users',
        db.Column('user_id', db.Integer(), db.ForeignKey('user.id')),
        db.Column('role_id', db.Integer(), db.ForeignKey('role.id')))

class Role(db.Model, RoleMixin):
    id = db.Column(db.Integer(), primary_key=True)
    name = db.Column(db.String(80), unique=True)
    description = db.Column(db.String(255))

class User(db.Model, UserMixin):
    id = db.Column(db.Integer, primary_key=True)
    email = db.Column(db.String(255), unique=True)
    password = db.Column(db.String(255))
    active = db.Column(db.Boolean())
    confirmed_at = db.Column(db.DateTime())
    roles = db.relationship('Role', secondary=roles_users,
                            backref=db.backref('users', lazy='dynamic'))

class Page(db.Model):
    __tablename__ = 'page'
    id = db.Column(db.Integer, primary_key=True)
    title = db.Column(db.String(255), nullable=False)
    tag = db.Column(db.String(255))
    content = db.Column(db.String(255))

    def __repr__(self):
        return self.title


class menu(db.Model):
    __tablename__ = 'menu'
    id = db.Column(db.Integer,primary_key=True)
    title = db.Column(db.String(255),nullable=False)
    order = db.Column(db.Integer)
    url = db.Column(db.String)
    page_id = db.Column(db.Integer, db.ForeignKey('page.id'),nullable=False)
    #page = db.relationship('Page', backref='menu', lazy=True)
    page = db.relationship('Page', lazy='select',backref=db.backref('menu', lazy='joined'),uselist=False)
    def __repr__(self):
        return self.title


