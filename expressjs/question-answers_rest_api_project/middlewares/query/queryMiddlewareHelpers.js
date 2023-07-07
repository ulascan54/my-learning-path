const searchHelper = (searchKey, query, req) => {
    if (req.query.search) {
        const searchObject = {};

        const regex = new RegExp(req.query.search, 'i');
        searchObject[searchKey] = regex;

        return query.where(searchObject);
    }
    return query
};

module.exports = {
    searchHelper,
};
