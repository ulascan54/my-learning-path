const asyncErrorWrapper = require('express-async-handler');
const {
    searchHelper,
    populateHelper,
    questionSortHelper,
    paginationHelper,
} = require('./queryMiddlewareHelpers');

const questionQueryMiddleware = function (model, options) {
    return asyncErrorWrapper(async function (req, res, next) {
        let query = model.find();

        query = searchHelper('title', query, req);

        if (options && options.population) {
            query = populateHelper(query, options.population);
        }

        query = questionSortHelper(query, req);

        const paginationResult = await paginationHelper(model, query, req);

        query = paginationResult.query;
        const pagination = paginationResult.pagination;

        const queryResults = await query;

        res.queryResults = {
            success: true,
            count: queryResults.length,
            pagination: pagination,
            data: queryResults,
        };
        next();
    });
};

module.exports = questionQueryMiddleware;
