function fun(x, y, z) {
  return x * y + z
}

// 1) arguments
function gun(x, y, z) {
  if (arguments.length > 3) throw "illegal arguments: must provide 3 arguments!"
  return x * y + z
}

// 2) default values
function sun(x, y, z) {
  x = x || 1
  y = y || 2
  z = z || 3
  return x * y + z
}
//es6
function run(x = 1, y = 2, z = 3) {
  x = x || 1
  y = y || 2
  z = z || 3
  return x * y + z
}

// ----------
function is_nan(x) {
  return !(x === x)
}

console.log(fun()) //nan
console.log(run())
console.log(sun())
console.log(fun(3)) //nan
console.log(fun(3, 2)) //nan
console.log(run(3, 2))
console.log(fun(3, 2, 1))
console.log(run(3, 2, 1))
console.log(sun(3, 2, 1))
console.log(fun(3, 2, 1, 0))
console.log(gun(3, 2, 1, 0))
Number.isNaN(fun())
is_nan(fun())
