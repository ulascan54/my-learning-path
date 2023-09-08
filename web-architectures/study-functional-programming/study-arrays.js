x = 42
x = []

x.push(4)
x.push(42)
x.push(23)
x.push(15)
x.push(16)
x.push(8)
console.log(x)

numbers = [4, 42, 23, 15, 16, 8]
console.log(numbers)
console.log(numbers.length)

//loops

// 1) outer loop
for (let i = 0; i < numbers.length; ++i) {
  console.log(`${i} --> ${numbers[i]}`)
}

// 2) outer loop: for-each
for (let i in numbers) {
  console.log(`${i} --> ${numbers[i]}`)
}
//notes
numbers[10] = 100 //number is now irregular array

console.log(numbers)
console.log(numbers.length)
for (let i = 0; i < numbers.length; ++i) {
  //outer loop(does not work with irregular arrays)
  console.log(`${i} --> ${numbers[i]}`)
}
for (let i in numbers) {
  //outer loop: foreach-in (work with irregular arrays)
  console.log(`${i} --> ${numbers[i]}`)
}

// 3) outer loop: for-each-of (es7)
//outer loop: foreach-in (does not work with irregular arrays)
for (let number of numbers) {
  console.log(`${number}`)
}

console.table(numbers)

// 4) inner loop: array.foreach()
numbers.forEach((x, i) => console.log(`${i} --> ${x}`)) //functional programming!

numbers.forEach(console.log)
numbers.sort()
console.log(numbers)
let numericAscOrder = (x, y) => {
  if (x < y) return -1
  if (x === y) return 0
  else return 1
}
let numericDescOrder = (x, y) => {
  if (x < y) return 1
  if (x === y) return 0
  else return -1
}

numbers.sort(numericAscOrder) //partial ordering
console.log(numbers)
numbers.sort(numericDescOrder) //partial ordering
console.log(numbers)

// easy way
numbers.sort((x, y) => x - y) //partial ordering
console.log(numbers)
numbers.sort((x, y) => y - x) //partial ordering
console.log(numbers)

names = ["kate", "jack", "ben", "jin", "sun"]
names.sort()
console.log(names)
names.sort((x, y) => y.localeCompare(x))
console.log(names)
