let models = [{
  name: 'Bmw 418d',
  image: 'img/bmw.jpg',
  link: 'http://www.google.com'
}, {
  name: 'Mazda CX-3',
  image: 'img/mazda.jpg',
  link: 'http://www.facebook.com'
}, {
  name: 'Volvo S60',
  image: 'img/volvo.jpg',
  link: 'http://www.instagram.com'
}, {
  name: 'Skoda Suberb',
  image: 'img/skoda.jpg',
  link: 'http://www.twitter.com'
}, {
  name: 'Honda Civic',
  image: 'img/honda.jpg',
  link: 'http://www.cimri.com'
}, ]
let index=0
let interval
showSlide(index)
let slaytCount=models.length
let settings={
  duration:'1000',
  random:false
}
init(settings)

document.querySelectorAll('.arrow').forEach(function(item){
  item.addEventListener("mouseenter",function(){
    clearInterval(interval)
  })
})
document.querySelectorAll('.arrow').forEach(function(item){
  item.addEventListener("mouseleave",function(){
    init(settings)
  })
})
function init(settings){
  let prev
  interval = setInterval(function () {
    if (settings.random) {
      do {
      index=Math.floor(Math.random() * slaytCount)
        
      } while (index==prev);
      prev=index
    }
    else{
      index++
      if(index==slaytCount){
        index=0
      }
    }
    showSlide(index)
  },settings.duration)
}
document.querySelector('.fa-arrow-circle-left').addEventListener('click',function () {
  if(index===0){
    index=4
  }
  else{
  index--
  }
  showSlide(index)

})

document.querySelector('.fa-arrow-circle-right').addEventListener('click',function () {
  if(index===4){
    index=0
  }
  else{
  index++
  }
  showSlide(index)
})

function showSlide(index){
  document.querySelector(".card-title").textContent=models[index].name
  document.querySelector(".card-img-top").setAttribute("src", models[index].image)
  document.querySelector(".card-link").setAttribute("href", models[index].link)
}



