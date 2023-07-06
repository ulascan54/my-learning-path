const express = require('express');
const {
    askNewQuestion,
    getAllQuestions,
    getSingleQuestion,
    editQuestion,
    deleteQuestion,
    likeQuestion,
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
router.get(
    '/:id/like',
    [getAccessToRoute, checkQuestionExist, getQuestionOwnerAccess],
    likeQuestion
);
router.get('/', getAllQuestions);
router.get('/:id', checkQuestionExist, getSingleQuestion);
router.put(
    '/:id/edit',
    [getAccessToRoute, checkQuestionExist, getQuestionOwnerAccess],
    editQuestion
);
router.delete(
    '/:id/delete',
    [getAccessToRoute, checkQuestionExist, getQuestionOwnerAccess],
    deleteQuestion
);

module.exports = router;
