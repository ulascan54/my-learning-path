const express = require('express');
const {
    askNewQuestion,
    getAllQuestions,
    getSingleQuestion,
    editQuestion,
} = require('../controllers/question');
const {
    getAccessToRoute,
    getQuestionOwnerAccess,
} = require('../middlewares/authorization/auth');
const {
    checkQuestionExist,
} = require('../middlewares/database/databaseErrorHelpers');
//api/questions
const router = express.Router();

router.post('/ask', getAccessToRoute, askNewQuestion);
router.get('/', getAllQuestions);
router.get('/:id', checkQuestionExist, getSingleQuestion);
router.put(
    '/:id/edit',
    [getAccessToRoute, checkQuestionExist, getQuestionOwnerAccess],
    editQuestion
);

module.exports = router;
