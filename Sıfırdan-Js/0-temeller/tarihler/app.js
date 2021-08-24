let value;
const now = new Date(); // şuanki zamanı verir
const date1 = new Date("9-19-1993 06:15:00")
const date2 = new Date("September 19 1993")
const date3 = new Date("9/19/1993")
console.log(now);
console.log(date1);
console.log(date2);
console.log(date3);

value = date1.getMonth();
console.log(value);

value = date1.getDate();
console.log(value);

value = date1.getDay();
console.log(value);

value = date1.getHours();
value = date1.getMinutes();
value = date1.getSeconds();
value = date1.getMilliseconds();

date1.setMonth(7)
date1.setDate(15)
date1.setFullYear(1994)
date1.setHours(0)
date1.setMinutes(15)
date1.setMinutes(30)

value = date1
console.log(value);
 