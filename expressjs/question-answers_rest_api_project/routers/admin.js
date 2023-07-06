const express = require('express');
const { getAccessToRoute,getAdminAccess } = require('../middlewares/authorization/auth');
const router = express.Router();
const {blockUser} = require('../controllers/admin');
const { checkUserExist } = require('../middlewares/database/databaseErrorHelpers');
//block user
//deleteuser
router.use([getAccessToRoute,getAdminAccess])

router.get('/block/:id',checkUserExist,blockUser)

module.exports = router;
