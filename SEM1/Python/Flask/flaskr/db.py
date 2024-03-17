import sqlite3
import click
from flask import current_app, g

# Connect to DB
def connectDB():
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'],
            detect_types=sqlite3.PARSE_DECLTYPES
        )

    return g.db

# Close DB connection
def closeDB(e = None):
    db = g.pop('db', None)

    if db is not None:
        db.close()
        
    return

# Initialize DB
def init_db():
    db = connectDB()

    with current_app.open_resource('schema.sql') as f:
        db.executescript(f.read().decode('utf8'))

# defines a CLI command "init-db" to call init_db() funcion
@click.command('init-db')

def init_db_command():
    init_db()
    click.echo('Initialized the database.')
    
# Initialize App
def init_app(app):
    app.teardown_appcontext(closeDB)
    app.cli.add_command(init_db_command)