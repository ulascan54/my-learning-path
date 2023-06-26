const express = require('express')
const dotenv = require('dotenv')
const routers = require('./routers/index')
const connectDatabase = require('./helpers/database/connectDatabase')
const customErrorHandler = require('./middlewares/errors/customErrorHandler')

// Enviroment Variables
dotenv.config({
    path:"./config/.env"
})

// MongoDb Connection
connectDatabase()


const app=express()

//express -body middleware

app.use(express.json())

const PORT = process.env.PORT;

//localhost:4000/api/questions
//localhost:4000/api/auth


// ! Routers Middleware
app.use('/api',routers)

// Error Handler
app.use(customErrorHandler)

app.listen(PORT,()=>{
    console.log(`App started on ${PORT} : ${process.env.NODE_ENV}`)
})