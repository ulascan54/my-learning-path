const mongoose = require('mongoose');
const Schema = mongoose.Schema;
const bcrypt = require('bcryptjs');
const UserSchema = new Schema({
    name: {
        type: String,
        required: [true, 'Please provide a name'],
    },
    email: {
        type: String,
        required: [true, 'Please provide a email'],
        unique: [true, 'Please try different email'],
        match: [
            /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/,
            'Please fill a valid email address',
        ],
    },
    role: {
        type: String,
        default: 'user',
        enum: ['user', 'admin'],
    },
    password: {
        type: String,
        minlength: [6, 'Please provide a password with min length 6'],
        required: [true, 'Please provide a password'],
        select: false,
    },
    createdAt: {
        type: Date,
        default: Date.now,
    },
    title: {
        typle: String,
    },
    about: {
        type: String,
    },
    place: {
        type: String,
    },
    website: {
        type: String,
    },
    profile_image: {
        type: String,
        default: 'default.jpg',
    },
    blocked: {
        type: Boolean,
        default: false,
    },
});

UserSchema.pre('save', function (next) {

    if(this.isModified("password")){
        next()
    }

    bcrypt.genSalt(10,(err,salt)=>{
        if(err) next(err)
        bcrypt.hash(this.password,salt,(err,hash)=>{
            if(err)next(err)
            this.password=hash
            next()
        })
    })
    
});

module.exports = mongoose.model('User', UserSchema);
// users

//user.create
