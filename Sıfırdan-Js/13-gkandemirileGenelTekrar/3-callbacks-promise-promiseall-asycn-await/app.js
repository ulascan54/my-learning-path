const todos=[
  {
    title:"todo1",
    description:"bug temizlemesi"
  },
  {
    title:"todo2",
    description:"yemek yap"
  },
  {
    title:"todo3",
    description:"ders çalış"
  }
]

//* Callback
// let todoListEl = document.getElementById("todoList")
// function todoList() {
//   let todoItems=" "
//   setTimeout(() => {
//     todos.forEach(todo => {
//       todoItems+=`
//         <li>
//         <b>${todo.title}</b>
//         <p>${todo.description}</p>
//         </li>
//       `
//     });
//     todoListEl.innerHTML=todoItems
//   }, 1000);
// }
// function newTodo(todo,callback){
//   setTimeout(() => {
//     todos.push(todo)
//     callback()
//   }, 2000);
// }
// newTodo({
//   title:"todo4",
//   description:"camı aç"
// },todoList)

// todoList()


//*Promise
// let todoListEl = document.getElementById("todoList")
// function todoList() {
//   let todoItems=" "
//   setTimeout(() => {
//     todos.forEach(todo => {
//       todoItems+=`
//         <li>
//         <b>${todo.title}</b>
//         <p>${todo.description}</p>
//         </li>
//       `
//     });
//     todoListEl.innerHTML=todoItems
//   }, 1000);
// }
// function newTodo(todo){
//   return new Promise((resolve,reject)=>{
//     setTimeout(() => {  
//       todos.push(todo)
//       let e=false
//       if (e) {
//         reject("hata var")
//       }else{
//         resolve(todos)
//       }
//     }, 2000);
//   })
// }
// newTodo({
//   title:"todo4",
//   description:"camı aç"
// }).then(response=> {
//   console.log('NewList :>> ', response);
//   todoList()
// }).catch(e=>console.log('error :>> ', e))

//* promise all
//* websayfasında 5 6 sayfa varsa bürsürü istek atılıyorsa bütün promiseları beklemek için kullanılır
//* promise then promis then den kurtulmak için kullanılır promise all
//* promise all bizim için içerisinde tanımlanan bütün promisları arrray olarak atılıyor
//* bütün hepsi tamamlandığında olumlu yada olumsuz bütün bilgilerle beraber geridönüş yapar

// const p1= Promise.resolve("P1")
// const p2= new Promise((resolve,reject)=>{
//   setTimeout(() => {
//     resolve("ben ikinci promise'im")
//   }, 2000);
// })
// const p3= 1402199231
// const p4=fetch("https://jsonplaceholder.typicode.com/posts").then(res=>res.json()).then(data=>data)
// Promise.all([p1,p2,p3,p4]).then(promises=>{
//   console.log('promises :>> ', promises);
// })
//* async await
//* bağzı durumlarda asenkron olarak dpden sorgu gelmesi beklenirken 
//* önceki işlem uzun sürerse diğeri onu beklemiyeceği için bekletmek için kullanılır
//* fonksiyonları senkron hale getirmek için yardımcı olur

async function fechPost(){
  const response = await fetch("https://jsonplaceholder.typicode.com/posts")
  const data = await response.json()
  console.log('response :>> ', data);
  data.forEach((i,j) => {
      console.log(j+1,'. :>> ', i);
  });
}
fechPost()