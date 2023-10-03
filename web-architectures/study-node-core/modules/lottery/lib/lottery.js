exports.draw = (max, size) => {
  let numbers = []
  while (numbers.length < size) {
    let number = createNumber(max)
    if (numbers.includes(number)) numbers.push(number)
  }
  numbers.sort((x, y) => x - y)
  return numbers
}

function createNumber(max) {
  return Math.floor(Math.random() * max) + 1
}
