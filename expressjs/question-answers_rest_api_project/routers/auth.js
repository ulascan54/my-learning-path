const express = require('express')

const router = express.Router();

router.get('/',(req,res)=>{
    res.send('Auth Home Page');
})

router.get('/register',(req,res)=>{
    res.send('Auth register page Page');
})

module.exports ={
    router
}