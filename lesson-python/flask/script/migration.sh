#!/bin/sh
alembic downgrade base
rm -rf alembic/versions/*.py
alembic revision --autogenerate -m "initial db"
alembic upgrade head
