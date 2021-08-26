//*Elementleri seçme
const githubForm = document.getElementById("github-form")
const nameInput = document.getElementById("githubname")
const clearLastUsers=document.getElementById("clear-last-users")
const listUsers=document.getElementById("last-users")
const github= new Github()
const ui= new UI
evenetListeners()
function evenetListeners(){
  githubForm.addEventListener("submit",getData)
  clearLastUsers.addEventListener("click",clearAllSearched)
  document.addEventListener("DOMContentLoaded",getAllSearched)
}
function getData(e){
  let username=nameInput.value.trim()
  if (username==="") {
      ui.showError("Lütfen geçerli bir kullanıcı adı girin.")

  }
  else{
      github.getGithubData(username)
      .then(response=>{
          if (response.user.message==="Not Found") {
            ui.showError("Kullanıcı Bulunamadı")
          }else{
            ui.addSearchedUserToUI(username)
            Storage.addSearchedUserToStorage(username)
            ui.addUserFromUI(response.user)
            ui.addRepoFromUI(response.repo)
          }
        })
      .catch(err=>ui.showError(err))
  }
  ui.clearInput()
  e.preventDefault()
}
function clearAllSearched(){
  if(confirm("Eminmisiniz ?")){
    Storage.clearAllSearchedUsersFromStorage()
    ui.clearAllSearchedUsersFromUI()
  }
}
function getAllSearched(){
  //arababkaru stıragedan al ve uı a yazdır
  let users= Storage.getSearchedUsersFromStorage()
  let result="";
  users.forEach(user => {
    result+=` <li class="list-group-item">${user}</li>`
  });
  listUsers.innerHTML=result
}