//* Spread Operatörü
const langs =["Python","Java","C++","php"]
// console.log(langs[0],langs[1],langs[2],langs[3])
// console.log(...langs)
// const lang2=["javascript","c#",langs[0],langs[1],langs[2],langs[3]]
// const lang2=["javascript","c#",...langs]
// console.log(...lang2)

// const numbers=[1,2,3,4,5,6,7,8,9];
// const [a,b,...numbers2]=numbers
// console.log(a,b,numbers2)

const addNumbers=(a,b,c)=>console.log(a+b+c)
const numbers=[100,200,300]
addNumbers(numbers[0],numbers[1],numbers[2])
addNumbers(...numbers)

