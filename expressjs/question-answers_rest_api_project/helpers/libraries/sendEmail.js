const nodemailer = require("nodemailer");
const sendEmail=async(mailOptions)=>{
    const transporter = nodemailer.createTransport({
        host: process.env.SMTP_HOST,
        port: process.env.SMTP_PORT,
        auth: {
          user: process.env.SMTP_USER,
          pass:  process.env.SMTP_PASS
        }
      });

      let info = await transporter.sendMail(mailOptions);
      console.log(`message sent: ${info.messageId}`)

     
}

module.exports={
    sendEmail
}