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

app.put("/users/:id",(req,res,next)=>{
    const id = parseInt(req.params.id)
    for(let i =0 ; i<users.length;i++){
        if(users[i].id ===id){
            users[i]={
                ...users[i],
                ...req.body
            }
        }
    }
    res.json({
        success:true,
        data:users
    })
})

app.delete("/users/:id",(req,res,next)=>{
    const id = parseInt(req.params.id)
    for(let i =0 ; i<users.length;i++){
        if(users[i].id ===id){
            users.splice(i,1)
        }
    }
    res.json({
        success:true,
        data:users
    })
})

app.listen(PORT, ()=>{
    console.log("Server Started PORT:"+ PORT)
})
