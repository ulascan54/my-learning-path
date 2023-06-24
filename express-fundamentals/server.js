const express = require("express");

const users= [
    {id:1, name:"Ulaş Can", place:"Ankara"},
    {id:2, name:"Ahmet Kadayifçi", place:"İstanbul"},
];

const app = express();
const PORT = 4000;

//Get Request
//localhost:4000/users
app.get("/users",(req,res,next)=>{

    res.json(users)
})

app.listen(PORT, ()=>{
    console.log("Server Started PORT:"+ PORT)
})