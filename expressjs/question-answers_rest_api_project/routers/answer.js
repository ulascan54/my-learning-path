const express = require('express');

const router = express.Router({mergeParams:true});

router.get('/',(req,res,next)=>{
    console.log(req.params)
    res.send("answer route")
})

module.exports = router;
