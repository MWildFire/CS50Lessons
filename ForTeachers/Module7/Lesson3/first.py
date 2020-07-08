from cs50 import SQL

db = SQL("sqlite:///mydb.db")
db.execute("CREATE TABLE employees (SSN CHAR(10) NOT NULL, EMP_AGE INT NOT NULL)")
db.execute("""INSERT INTO employees VALUES("IT", 23)""")
db.execute("SELECT * FROM employees")