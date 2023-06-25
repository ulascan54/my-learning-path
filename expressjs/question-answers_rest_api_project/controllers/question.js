const getAllQuestions = (req,res,next) => {
    res.status(404).json({
        success:true
    });
}


module.exports = {
    getAllQuestions,
}