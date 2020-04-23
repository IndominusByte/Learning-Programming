FROM python:2.7-slim
MAINTAINER nyoman pradipta <nyomanpradipta120@gmail.com>

RUN apt-get update && apt-get install build-essential libpq-dev -y 
ADD web_app/. /web_app
WORKDIR /web_app

COPY requirements.txt requirements.txt
RUN pip install -r requirements.txt
#RUN pip install --trusted-host pypi.python.org -r requirements.txt

COPY . .

CMD gunicorn -b 0.0.0.0:8000 --access-logfile - "app:app"

