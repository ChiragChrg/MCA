import sqlite3

connection = sqlite3.connect("employee.db")

conn = connection.cursor()

# conn.execute(('''
#     CREATE TABLE EMPLOYEE_MASTER (
#         EID INTEGER PRIMARY KEY,
#         EMPNAME VARIABLE(18) NOT NULL,
#         EMPSAL INTEGER NOT NULL,
#         DEPARTMENT VARCHAR(10) NOT NULL
#     )
# '''))

# conn.execute("INSERT INTO EMPLOYEE_MASTER VALUES(102, 'Lodith', 80000, 'DT')")

g = conn.execute("SELECT * FROM EMPLOYEE_MASTER")
for i in g:
    print(i)