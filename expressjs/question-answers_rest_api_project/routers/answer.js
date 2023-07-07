const express = require('express');
const { getAccessToRoute } = require('../middlewares/authorization/auth');
const { addNewAnswerToQuestion } = require('../controllers/answer');

const router = express.Router({ mergeParams: true });

router.post('/', getAccessToRoute, addNewAnswerToQuestion);

module.exports = router;
