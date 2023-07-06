const express = require('express');
const { askNewQuestion } = require('../controllers/question');
const { getAccessToRoute } = require('../middlewares/authorization/auth');
//api/questions
const router = express.Router();

router.post('/ask', getAccessToRoute, askNewQuestion);

module.exports = router;
