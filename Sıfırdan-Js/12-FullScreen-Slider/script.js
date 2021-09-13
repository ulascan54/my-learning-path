const slides = document.querySelectorAll(".slide")
const next = document.getElementById("next")
const prev = document.getElementById("prev")
const auto=true;
const intervalTime=5000;
let slideInterval;
const nextSlide = () => {
  const activeSlide = document.querySelector(".active")
  activeSlide.classList.remove('active')
  if (activeSlide.nextElementSibling) {
    activeSlide.nextElementSibling.classList.add("active")
  } else {
    slides[0].classList.add('active')
  }
}

const prevSlide = () => {
  const activeSlide = document.querySelector(".active")
  activeSlide.classList.remove('active')
  if (activeSlide.previousElementSibling) {
    activeSlide.previousElementSibling.classList.add("active")
  } else {
    slides[slides.length-1].classList.add('active')
  }
}
next.addEventListener("click",()=>{
  nextSlide()
  if (auto) {
    clearInterval(slideInterval)
    slideInterval= setInterval(nextSlide, intervalTime)
  }
})
prev.addEventListener("click",()=>{
  prevSlide()
  if (auto) {
    clearInterval(slideInterval)

    slideInterval= setInterval(nextSlide, intervalTime)
  }
})

if (auto) {
  slideInterval= setInterval(nextSlide, intervalTime)
}
