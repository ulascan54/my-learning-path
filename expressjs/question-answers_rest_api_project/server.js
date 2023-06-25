const express = require('express')
const dotenv = require('dotenv')
const routers = require('./routers/index')

// Enviroment Variables
dotenv.config({
    path:"./config/.env"
})
const app=express()
const PORT = process.env.PORT;

//localhost:4000/api/questions
//localhost:4000/api/auth


// ! Routers Middleware
app.use('/api',routers)

app.listen(PORT,()=>{
    console.log(`App started on ${PORT} : ${process.env.NODE_ENV}`)
})