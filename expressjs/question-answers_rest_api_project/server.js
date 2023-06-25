const express = require('express')
const dotenv = require('dotenv')
const app=express()
// Enviroment Variables
dotenv.config({
    path:"./config/.env"
})
const PORT = process.env.PORT;

//localhost:4000/api/questions
//localhost:4000/api/auth

//* get
app.get('/api/questions',(req,res)=>{
    res.send("Question home page ")
})

//* delete
app.get('/api/questions/delete',(req,res)=>{
    res.send("Question delete page ")
})

//* get
app.get('/api/auth',(req,res)=>{
    res.send("Question home page ")
})

//* delete
app.get('/api/auth/register',(req,res)=>{
    res.send("Question delete page ")
})


app.listen(PORT,()=>{
    console.log(`App started on ${PORT} : ${process.env.NODE_ENV}`)
})