const express = require('express');
const { getAllQuestions } = require('../controllers/question');
//api/questions
const router = express.Router();

router.get('/', getAllQuestions);

router.get('/delete', (req, res) => {
    res.send('questions delete  Page');
});

module.exports = router;
