//* Setler-Kümeler

const myset=new Set()
myset.add(100)
myset.add(100)
myset.add(3.14)
myset.add("Mustafa")
myset.add(true)
myset.add([1,2,3])
myset.add({a:1,b:2})

const myset2=new Set([100,100,100,3.14,"Mustafa",true,[1,2,3],{a:1,b:2}])

// console.log(myset)
// console.log(myset2)

//*Size
// console.log(myset.size)

//*delete metodu
// myset.delete("Mustafa")
// console.log(myset)
//*has metodu
// console.log(myset.has("Mustafa"))
// console.log(myset.has(3.14))
// console.log(myset.has(2000))
// console.log(myset.has([1,2,3]))
//*for each
// myset.forEach(value => {
//   console.log(value)
// });
//*for of
// for (const value of myset) {
//   console.log(value)
// }

const array=Array.from(myset)
console.log(array)