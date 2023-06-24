const express = require('express')
const dotenv = require('dotenv')
const app=express()
// Enviroment Variables
dotenv.config({
    path:"./config/.env"
})
const PORT = process.env.PORT;
app.get('/',(req,res)=>{
    res.send("Hello Question Answer Api ")
})
app.listen(PORT,()=>{
    console.log(`App started on ${PORT} : ${process.env.NODE_ENV}`)
})