const express = require('express');
const { getSingleUser } = require('../controllers/user');
const router = express.Router();
const {
    checkUserExist,
} = require('../middlewares/database/databaseErrorHelpers');
router.get('/:id', checkUserExist, getSingleUser);

module.exports = router;
