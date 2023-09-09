//blocking function -> synchronous function
function fun(numbers) {
  return numbers.reduce((s, u) => s + u, 0)
}

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]

//blocking
let sum = fun(numbers)
console.log("sum:" + sum)

//1)promise
// async
function gun(numbers) {
  return new Promise((resolve, reject) => {
    let sum = numbers.reduce((s, u) => s + u, 0)
    if (Math.random() < 0.5) resolve(sum)
    else reject("something went wrong!")
  })
}

gun(numbers)
  .then((acc) => console.log(acc))
  .catch((err) => console.error(err))
console.log("done!")

//es7 : async keyword (syntactic sugar)

async function sun(numbers) {
  let sum = numbers.reduce((s, u) => s + u, 0)
  if (Math.random() < 0.5) return sum
  else return "something went wrong!"
}

sun(numbers)
  .then((acc) => console.log(acc))
  .catch((err) => console.error(err))
console.log("done!")
