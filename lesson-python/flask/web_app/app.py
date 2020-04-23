from flask import Flask , render_template,abort
from web_app.models import *
from flask_admin import Admin
from web_app.admin import *
from flask_security import Security, SQLAlchemyUserDatastore , login_required

app = Flask(__name__)
app.config.from_pyfile('settings.py')

db.init_app(app)

admin = Admin(app, name='flask', template_mode='bootstrap3')
admin.add_view(PageModelView(Page, db.session))
admin.add_view(MenuModelView(menu, db.session))

user_datastore = SQLAlchemyUserDatastore(db, User, Role)
security = Security(app, user_datastore)

@app.route('/')
@app.route('/<url>')
def index(url=None):
    if url is None:
        testing = Page.query.filter_by(title='home').first()
    elif url is not None:
        testing = Page.query.filter_by(title=url).first()
    if testing is None:
        abort(404)
    content = menu.query.order_by('order').all()
    return render_template('index.html',name=testing,content=content)

@app.route('/rahasia')
@login_required
def rahasia():
    return 'upps you got me'

@app.errorhandler(404)
def page_not_found(e):
    return 'page not found 404'
