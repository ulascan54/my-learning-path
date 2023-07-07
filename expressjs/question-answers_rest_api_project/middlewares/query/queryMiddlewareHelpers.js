const searchHelper = (searchKey, query, req) => {
    if (req.query.search) {
        const searchObject = {};

        const regex = new RegExp(req.query.search, 'i');
        searchObject[searchKey] = regex;

        return query.where(searchObject);
    }
    return query
};


const populateHelper=(query,population)=>{
    return query.populate(population)
}

const questionSortHelper=(query,req)=>{
    const sortKey = req.query.sortBy;
    if (sortKey == 'most-answered') {
        return query.sort('-answerCount -createdAt');
    }
    if (sortKey == 'most-liked') {
        return query.sort('-likeCount');
    }
    return query.sort('-createdAt');
}

module.exports = {
    searchHelper,populateHelper,questionSortHelper
};
