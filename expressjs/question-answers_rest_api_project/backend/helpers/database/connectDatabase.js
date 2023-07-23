const mongoose = require('mongoose');

const connectDatabase = () => {
    mongoose.set('strictQuery', false);
    mongoose
        .connect(process.env.MONGO_URI, {
            useNewUrlParser: true,
        })
        .then(() => {
            console.log('MongoDB connection successful');
        })
        .catch((err) => {
            console.log(err);
        });
};
// const connectDatabase=()=>{
//     mongoose.connect(process.env.MONGO_URI).then(()=>{
//         console.log("mongodb connection successful")
//     }).catch(err=>{
//         console.error(err)
//     })
// }

module.exports = connectDatabase;
