const express = require('express')
const app=express()

const PORT = 4000 || process.env.PORT;
app.get('/',(req,res)=>{
    res.send("Hello Question Answer Api s")
})
app.listen(PORT,()=>{
    console.log(`App started on ${PORT}`)
})