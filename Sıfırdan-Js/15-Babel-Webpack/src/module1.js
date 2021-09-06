// module.exports.test1=function test1 (){
//   console.log("Test 1")
// }
// module.exports.test2=function test2(){
//   console.log('test2')
// }

// module.exports = {
//   name: "Mustafa",
//   test1: function () {
//     console.log("test1");
//   },
//   person: {
//     name: "mustafa",
//     mail: "adşlefkaef",
//   },
// };
//es6 modules
export const name = "Mustafa";
export function test() {
  console.log("test fonksiyonu");
}
export class Person {
  static Test() {
    console.log("Person Test");
  }
}
export const employee = {
  name: "ulaş",
  salary: 4000,
};
export default class Deneme{
  static deneme(){
    console.log("Default Deneme");
  }
}
