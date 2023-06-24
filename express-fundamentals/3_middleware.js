const accessControl = (req,res,next)=>{
    const access=false;
    if(!access){
        res.status(401).json({
            success:false,
            message:"You are not authorized"
        })
    }
    else{
        console.log("middleware:Access Control");
        next();
    }
};

const defaultMiddleware=(req,res,next)=>{
    console.log('DefaultMiddleware')
    next()
}
module.exports ={
    accessControl,defaultMiddleware
}