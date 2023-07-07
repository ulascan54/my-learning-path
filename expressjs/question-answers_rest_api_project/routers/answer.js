const express = require('express');
const { getAccessToRoute } = require('../middlewares/authorization/auth');
const {
    addNewAnswerToQuestion,
    getAllAnswersByQuestion,
} = require('../controllers/answer');

const router = express.Router({ mergeParams: true });

router.post('/', getAccessToRoute, addNewAnswerToQuestion);
router.get('/', getAllAnswersByQuestion);

module.exports = router;
