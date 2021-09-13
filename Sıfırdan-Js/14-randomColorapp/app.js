const text=document.getElementById('text')
const btn=document.getElementById('btn')

const codesArray=[0,1,2,3,4,5,6,7,8,9,'A','B','C','D','E','F']

const randomColorCode=()=> {
  let hexCode='#'
  for (let index = 0; index < 6; index++) {
     hexCode +=codesArray[Math.floor(Math.random()*codesArray.length)]
  }
  return hexCode
}
btn.addEventListener('click',()=>{
  const colorCode=randomColorCode()
  text.innerHTML=colorCode
  document.body.style.backgroundColor=colorCode
})