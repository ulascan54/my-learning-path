// localstorage sessionstorage
let darkMode=localStorage.getItem('darkMode')
const darkModeToggler=document.getElementById("dark-mode-toggler")

const enableDarkMode=()=>{
  document.body.classList.add('dark-mode')
  localStorage.setItem('darkMode','enable')
}

const disableDarkMode=()=>{
  document.body.classList.remove('dark-mode')
  localStorage.setItem('darkMode',null)
}
if(darkMode==='enable'){
  enableDarkMode()
  darkModeToggler.checked=true
}

darkModeToggler.addEventListener("change",()=> {
    // document.body.classList.toggle("dark-mode")
    darkMode=localStorage.getItem("darkMode")
    if(darkMode!=='enable') enableDarkMode()
    else disableDarkMode()
})