const userExpireDate= new Date("04-02-2023 14:02:18")
const currentDate=new Date()
if (userExpireDate>currentDate) {
  console.log('oturumunuz aktiftirr...');
}else 
console.log('logout...');
