const express = require('express')
const dotenv = require('dotenv')
const routers = require('./routers/index')
const connectDatabase = require('./helpers/database/connectDatabase')

// Enviroment Variables
dotenv.config({
    path:"./config/.env"
})

// MongoDb Connection
connectDatabase()


const app=express()
const PORT = process.env.PORT;

//localhost:4000/api/questions
//localhost:4000/api/auth


// ! Routers Middleware
app.use('/api',routers)

app.listen(PORT,()=>{
    console.log(`App started on ${PORT} : ${process.env.NODE_ENV}`)
})