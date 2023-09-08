//classic function
function fun(numbers) {
  let odds = []
  for (let number of numbers) {
    if (number % 2 === 1) odds.push(number)
  }
  return odds
}

//generator function
function* gun(numbers) {
  // artık sonuç return edilmeyecek
  for (let number of numbers) {
    console.log("iterating numbers:" + number)
    if (number % 2 === 1) yield number
  }
}

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
for (let x of fun(numbers)) {
  console.log(x)
}
for (let x of gun(numbers)) {
  // oluşan değer iterasyonu beslemesi için yield lanır
  // dolayısıyla fonksiyon içersindeki itarasyonla entegre çalışır
  // tüm array tek bir taranarak sonuca ulaşır
  console.log("odd value: " + x)
}

function* filter(numbers, ff) {
  for (let number of numbers) {
    console.log("filtering numbers:" + number)
    if (ff(number)) yield number
  }
}

function* map(numbers, mf) {
  for (let number of numbers) {
    console.log("mapping numbers:" + number)
    yield mf(number)
  }
}

function* reduce(numbers, initValue, rf) {
  let acc = initValue
  for (let number of numbers) {
    console.log("reducing numbers:" + number)
    acc = rf(acc, number)
  }
  yield acc
}
for (let x of map(
  filter(numbers, (x) => x % 2 === 1),
  (u) => u * u
)) {
  console.error("odd value: " + x)
}

sum = reduce(
  map(
    filter(numbers, (x) => x % 2 === 1),
    (u) => u * u
  ),
  0,
  (s, u) => s + u
).next()

console.log(sum)
