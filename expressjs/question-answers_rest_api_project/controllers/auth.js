const User = require('../models/User');
const CustomError = require('../helpers/error/CustomError');
const asyncErrorWrapper = require('express-async-handler');
const { sendJwtToClient } = require('../helpers/authorization/tokenHelpers');
const {
  validateUserInput,
  comparePassword,
} = require('../helpers/input/inputHelpers');

const register = asyncErrorWrapper(async (req, res, next) => {
  //post data

  const { name, email, password, role } = req.body;
  const user = await User.create({
    name,
    email,
    password,
    role,
  });
  sendJwtToClient(user, res);
});

const login = asyncErrorWrapper(async (req, res, next) => {
  const { email, password } = req.body;
  if (!validateUserInput(email, password)) {
    return next(new CustomError('Please Check Your Inputs', 400));
  }

  const user = await User.findOne({ email }).select('+password');

  if (!comparePassword(password, user.password)) {
    return next(new CustomError('Please Check Your credentials', 400));
  }

  sendJwtToClient(user, res);
});

const logout = asyncErrorWrapper(async (req, res, next) => {
  const { NODE_ENV } = process.env;

  return res.status(200)
  .cookie({
    httpOnly:true,
    expires:new Date(Date.now()),
    secure:NODE_ENV === 'development' ? false : true
  }).json({
    success:true,
    message:'logout successful'
  })
});

const imageUpload = asyncErrorWrapper(async (req, res, next) => {
  //Image Upload Success
  const user = await User.findByIdAndUpdate(req.user.id,{
    "profile_image": req.savedProfileImage
  },{
    new:true,
    runValidators:true,
  })
  res.status(200).json({
    success:true,
    message:'Image Upload successfull',
    data:user
  })

})

const getUser = (req, res, next) => {
  res.json({
    success: true,
    data: {
      id: req.user.id,
      name: req.user.name,
    },
  });
};

const forgotPassword = asyncErrorWrapper(async (req, res, next) => {
  const resetEmail = req.body.email
  const user = await  User.findOne({email:resetEmail});
  if(!user){
    return next(new CustomError('There is no user with that email',400))
  }
  const resetPassowrdToken=user.getResetPasswordTokenFromUser()

  await user.save()
  res.json({
    success:true,
    message:'Token Sent To Your Email'
  })
})

module.exports = {
  register,
  login,
  logout,
  getUser,
  imageUpload,
  forgotPassword
};
