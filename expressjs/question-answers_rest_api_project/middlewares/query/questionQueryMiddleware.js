const asyncErrorWrapper = require('express-async-handler');
const { searchHelper,populateHelper } = require('./queryMiddlewareHelpers');

const questionQueryMiddleware = function (model, options) {
    return asyncErrorWrapper(async function (req, res, next) {
        let query = model.find();

        query = searchHelper('title',query,req)
        
        if(options && options.population){
            query = populateHelper(query,options.population)
        }
    });
};

module.exports = questionQueryMiddleware
