var mysql = require("mysql2")

var conn = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "",
    database: "studentDB",
})

conn.connect((err) => {
    if (err) throw err
    console.log("MySQL DB Connected!")
})

var sql = 'create database studentdb'
conn.query(sql, (err, res) => {
    if (err) throw err
    console.log("Database Created!")
})