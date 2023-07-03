const User = require('../models/User');
const CustomError = require('../helpers/error/CustomError');
const asyncErrorWrapper = require('express-async-handler');
const sendJwtToClient = require('../helpers/authorization/sendJwtToClient')


const register = asyncErrorWrapper(async (req, res, next) => {
    //post data

    const { name, email, password, role } = req.body;
    const user = await User.create({
        name,
        email,
        password,
        role,
    });
    sendJwtToClient(user,res)

});
const errorTest = (req, res, next) => {
    //question does not exist
    return next(new SyntaxError('CUSTOM ERROR MESSAGE', 400));
};

module.exports = {
    register,
    errorTest,
};
