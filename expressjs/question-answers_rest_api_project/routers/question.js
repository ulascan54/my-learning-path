const express = require('express')
//api/questions
const router = express.Router();

router.get('/',(req,res)=>{
    res.send('questions Home Page');
})

router.get('/delete',(req,res)=>{
    res.send('questions delete  Page');
})

module.exports =router
