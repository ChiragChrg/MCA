import { createConnection } from "mysql2"

const conn = createConnection({
    host: "localhost",
    user: "root",
    password: ""
})

conn.connect((err) => {
    if (err)
        throw err;

    console.log("MySQL DB Connected!")
})

// Create Employee Database
// const sql = `create database empdb`

// 

conn.query(sql, (err) => {
    if (err)
        throw err;

    console.log("Query Executed!")
})