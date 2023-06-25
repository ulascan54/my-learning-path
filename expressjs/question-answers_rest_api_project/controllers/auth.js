const User = require('../models/User')

const register = async (req,res,next) => {
    //try catch
    try{
        //post data
        const name='Ulaş Can Demirbağ'
        const email='ulas@gmail.com'
        const password='12345'
        
        const user = await User.create({
            name,
            email,
            password
        })
        res.status(200).json({
            success:true,
            data:user
        });
    }catch(err){
        return next(err)

    }
}
const errorTest =()=>{
    throw new Error('bir hata oluştu')
}

module.exports = {
    register,
    errorTest
}