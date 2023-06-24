const express = require("express");
const {accessControl,defaultMiddleware} = require("./3_middleware")
const users= [
    {id:1, name:"Ulaş Can", place:"Ankara"},
    {id:2, name:"Ahmet Kadayifçi", place:"İstanbul"},
];

const app = express();
const PORT = 4000;
// app.use(accessControl);//uygulama kapsamı
//Get Request
//localhost:4000/users
app.get("/users",[accessControl,defaultMiddleware] , (req,res,next)=>{

    res.json(users)
})
app.get("/producs",(req,res,next)=>{
    
    res.send("producs")
})

app.listen(PORT, ()=>{
    console.log("Server Started PORT:"+ PORT)
})