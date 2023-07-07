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
module.exports = {
    searchHelper,populateHelper
};
