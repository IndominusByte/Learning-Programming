from flask_admin.contrib.sqla import ModelView
from flask_login import current_user
from flask import redirect,request,url_for

class PageModelView(ModelView):
    column_list = ('title','content','tag')

    def is_accessible(self):
        return current_user.has_role('admin')
    def inaccessible_callback(self, name, **kwargs):
        if current_user.is_authenticated:
            return redirect(request.full_path)
        return redirect(url_for('security.login', next=request.full_path))

class MenuModelView(ModelView):
    column_list = ('url' ,'title','order')
