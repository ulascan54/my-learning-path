const express = require('express');
const { getAccessToRoute } = require('../middlewares/authorization/auth');
const {
    addNewAnswerToQuestion,
    getAllAnswersByQuestion,
    getSingleAnswer,
} = require('../controllers/answer');

const {
    checkQuestionAndAnswerExist,
} = require('../middlewares/database/databaseErrorHelpers');

const router = express.Router({ mergeParams: true });

router.post('/', getAccessToRoute, addNewAnswerToQuestion);
router.get('/', getAllAnswersByQuestion);
router.get('/:answer_id', checkQuestionAndAnswerExist, getSingleAnswer);

module.exports = router;
