const mongoose = require('mongoose');
const Question = require('./Question');
const Schema = mongoose.Schema;

const AnswerSchema = new Schema({
    content: {
        type: String,
        require: [true, 'Please provide a content'],
        minlength: [10, 'Please provide a content at least 10 characters'],
    },
    createdAt: {
        type: Date,
        default: Date.now,
    },
    likes: [
        {
            type: mongoose.Schema.ObjectId,
            ref: 'User',
        },
    ],
    user: {
        type: mongoose.Schema.ObjectId,
        ref: 'User',
        required: true,
    },
    question: {
        type: mongoose.Schema.ObjectId,
        ref: 'Question',
        required: true,
    },
});

module.exports = mongoose.model('Answer', AnswerSchema);
