// * while döngüsü

// let i =0;
// while(i<10){
//   console.log(i)
//   i++
// }

// let i=10
// while(i>0){
//   console.log(i)
//   i-=2 
// }

//* break ve continue
// let i=0
// while(i<10){
//   console.log(i)
//   if (i===5) {
//     break;
//   }
//   i++
// }


// let i =0
// while(i<10){
//   if (i==3 || i==5) {
//     i++;
//     continue;
//   }
//   console.log(i);
//   i++;
// }

//*Do while
// let i = 0
// do {
//   console.log(i);
//   i++;
// } while (i < 10)

// const langs = ["Python", "Javascript", "Java"];
// let index = 0;

// while (index < langs.length) {
//   console.log(langs[index]);
//   index+=1;
// }

// * for döngüsü
// for (let index = 0; index < langs.length; index++) {
//   console.log(langs[index]);
// }

//* for each
// const langs = ["Python", "Javascript", "Java"];
// langs.forEach(function(langs,index){
//   console.log(langs,index)
// });

//* map fonsiyon döngüsü
// const users = [{
//     name: "mustafa",
//     age: 25
//   },
//   {
//     name: "zeynep",
//     age: 40
//   },
//   {
//     name: "ali",
//     age: 12
//   }
// ]
// const names = users.map(function (user) {
//   return user.name
// })
// const ages = users.map(function (ages) {
//   return ages.age
// })
// console.log(names);
// console.log(ages);
//* for in döngüsü
const user ={
  name:"mustafa",
  age:25
}
for (const key in user) {
  console.log(key,user[key])
    
  }