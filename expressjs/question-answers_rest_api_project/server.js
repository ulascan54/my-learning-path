const express = require('express')
const dotenv = require('dotenv')
const question = require('./routers/question')
const auth = require('./routers/auth')

// Enviroment Variables
dotenv.config({
    path:"./config/.env"
})
const app=express()
const PORT = process.env.PORT;

//localhost:4000/api/questions
//localhost:4000/api/auth


// ! Routers Middleware

app.use('/api/questions',question)
app.use('/api/auth',auth)


app.listen(PORT,()=>{
    console.log(`App started on ${PORT} : ${process.env.NODE_ENV}`)
})