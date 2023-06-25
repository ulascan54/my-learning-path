import mongoose from 'mongoose';
const { Schema } = mongoose;

const UserSchema = new Schema({
    
    name:{
        type:String,
        required:[true,'Please provide a name']
    },
    email:{
        type: String,
        trim: true,
        lowercase: true,
        unique: [true,'Please try different email'],
        required: 'Email address is required',
        validate: [validateEmail, 'Please fill a valid email address'],
        match: [/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/, 'Please fill a valid email address']
    },
    role: {
        tpye:String,
        default:'user',
        enum:['user','admin']
    },
    password:{
        type:String,
        minlength:[6,'Please provide a password with min length 6'],
        required:[true,'Please provide a password'],
        select:false
    },
    createdAt:{
        type:Date,
        default:Date.now
    },
    title:{
        typle:String
    },
    about:{
        type:String
    },
    place:{
        type:String
    },
    website:{
        type:String
    },
    profile_image:{
        type:String,
        default:'default.jpg'
    },
    blocked:{
        type:Boolean,
        default:false
    }
});