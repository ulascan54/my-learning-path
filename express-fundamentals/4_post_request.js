const express = require("express");
const users= [
    {id:1, name:"Ulaş Can", place:"Ankara"},
    {id:2, name:"Ahmet Kadayifçi", place:"İstanbul"},
];

const app = express();
const PORT = 4000;

app.use(express.json())

app.get("/users" , (req,res,next)=>{
    res.json({
        success:true,
        data:users
    })
})
app.post("/users",(req,res,next)=>{
    const user=req.body
    users.push(user)
    res.json({
        success:true,
        data:users
    })
})

app.put("/users",(req,res,next)=>{
    res.json({
        success:true,
        data:"Put Request"
    })
})

app.delete("/users",(req,res,next)=>{
    res.json({
        success:true,
        data:"Delete Request"
    })
})

app.listen(PORT, ()=>{
    console.log("Server Started PORT:"+ PORT)
})