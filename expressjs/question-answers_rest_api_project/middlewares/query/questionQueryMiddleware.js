const asyncErrorWrapper = require('express-async-handler');
const { searchHelper } = require('./queryMiddlewareHelpers');

const questionQueryMiddleware = function (model, options) {
    return asyncErrorWrapper(async function (req, res, next) {
        let query = model.find();

        query = searchHelper('title',query,req)
    });
};

module.exports = {
    questionQueryMiddleware,
};
