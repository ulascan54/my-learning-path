const Question = require('../models/Question');
const CustomError = require('../helpers/error/CustomError');
const asyncErrorWrapper = require('express-async-handler');

const askNewQuestion = asyncErrorWrapper(async (req, res, next) => {
    const information = req.body;
    console.log(information);
    const question = await Question.create({
        ...information,
        user: req.user.id,
    });
    res.status(200).json({
        success: true,
        data: question,
    });
});

module.exports = {
    askNewQuestion,
};
