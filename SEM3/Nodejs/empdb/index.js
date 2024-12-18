var mysql = require("mysql2")
const { group } = require("console");

var conn = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "",
    database:"empdb"
})

conn.connect((err) => {
    if (err) throw err
    console.log("MySQL DB Connected!")
})

// var sql = 'create database empdb'
// conn.query(sql, (err, res) => {
//     if (err) throw err
//     console.log("Database Created!")
// })

// var sql="create table department(dname varchar(20),Research varchar(15),Adminstration varchar(15),CS varchar(15))"
// conn.query(sql,function(err){
//         if(err) throw err;
//         console.log("Table created Sucessfully")
//     });

//  var sql="insert into empdb values('Research','5','Manglore')"
// //  var sql="alter table department add primary key(dname)";
//  conn.query(sql,function(err){
//     if(err) throw err;
//     console.log("Table alter with PK")
// });

// var sql="select * from department";
// conn.query(sql,function(err,res){
//         if(err) throw err;
//         console.log(res)
//     });
// console.log("******");

// sql="insert into department values?";
// var values=[['Administartion',4,'benglore','SD'],['cs',1,'chennai','CD']]
// conn.query(sql,[values],function(err){
//             if(err) throw err;
//             console.log("2 records inserted")
// }); 

// var sql="create table employee(fname varchar(20),ssn int primary key,salary int,depno int, FOREIGN KEY (depno) REFERENCES department(dname)"
// conn.query(sql,function(err){
//                 if(err) throw err;
//                 console.log("Employee table Created")
//     });

// var sql="insert into employee values ?"
// var values=[['Smith',1789,3000,1],['fracline',3555,4000,4],['James',8555,55000,4],['Johan',9321,2000,3]]
// conn.query(sql,[values],function(err,res){
//                     if(err) throw err;
//                     console.log(res.affectedRows+"Record inserted");
//         });

// var sql="select * from employee";
// conn.query(sql,function(err,res){
//     if(err) throw err;
//     console.log(res);
//  });

// console.log("Display the number of employee inn each department")
// var sql="select count(*),dname from employee,department where employee.depno=department.dnumber group by dname"
// conn.query(sql,function(err,res){
//         if(err) throw err;
//         console.log(res);
// });

// console.log("Display the details of emplyee with maximum salary")
// var sql="select ssn,fname,dname from employee,department where employee.depno=department.dnumber & salary =(select max(salary() from employee)"
// / conn.query(sql,function(err,res){
//             if(err) throw err;
//             console.log(res);
//     });


// console.log("Display the  total salary of employee in each ")
// var sql="select dname,sum(salary) from employee,deapartment where employee.depno=department.dnumber Group by dname"
// conn.query(sql,function(err,res){
// if (err) throw err;
// conn.log(res)
// })

// console.log("Display employee and departmnet")
// var sql="select * from employee,departmnet where employee.depno=department.dnumber"
// conn.query(sql,function(err,res){
//     if (err) throw err;
//     conn.log(res)
// });

// console.log("Display the details of employee who are in the department 5")
// var sql="select * from employee where depno=5;"
// conn.query(sql,function(err,res){
//         if (err) throw err;
//         conn.log(res)
//     });

// console.log("Display the details of employee order by fname")
// var sql="select * from employee Order by fname;"
// conn.query(sql,function(err,res){
//         if (err) throw err;
//         conn.log(res)
//});

// console.log("Display the details of employee who work in resaerch departmnet")
// var sql="select * from employee,departmnet where employee.depno=department.dnumber dname=resaerch ;"
// conn.query(sql,function(err,res){
//         if (err) throw err;
//         conn.log(res)
//});

// console.log("increase the salry of employee who work in cs departmnet")
// var sql="update eployee set salary=salary+salary*0.10 where deptno=5 ;"
// conn.query(sql,function(err,res){
//         if (err) throw err;
//         conn.log(res)
//});

// console.log("delete  employee Jhon from employee table")
// var sql="delete from employee  where lower(fname)="john";
// conn.query(sql,function(err,res){
//         if (err) throw err;
//         conn.log(res)
//});