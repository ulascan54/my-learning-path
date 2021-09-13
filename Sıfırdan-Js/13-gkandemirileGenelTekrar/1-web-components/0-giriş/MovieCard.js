const template=document.createElement("template")
template.innerHTML=`
<style>
h3{
  color:green;
}
img{
  width:150px;
  height:150px;
  border-radius:50%;
}
.detail{
  display:none;
}
</style>

<h3></h3>
  <img src""></img>
  <p style="font-weight:bold"><slot name="year" /></p>
  <p><slot name="type" /></p>
 <p> <slot/></p>
<button>Tıkla.</button>
<p class="detail" >bu gizli bir içeriktir sadece buttonla gözükür</p>
`
class MovieCard extends HTMLElement{
    constructor(){
      super()
      this.showDetail=false
      this.attachShadow({mode:`open`})
      this.shadowRoot.appendChild(template.content.cloneNode(true))
      this.shadowRoot.querySelector("h3").innerHTML= this.getAttribute("title")
      // this.shadowRoot.querySelector("p").innerHTML=
      // "Lorem ipsum dolor sit, amet consectetur adipisicing elit. Eveniet cupiditate impedit dolore atque necessitatibus. Laudantium, eveniet aspernatur! Error vel repellat dolore consectetur animi quos voluptatem asperiores, ab soluta, dolores sunt."

      this.shadowRoot.querySelector("img").setAttribute("src",this.getAttribute("poster"))


      //     this.innerHTML =`<h3 style="color:green"> Captain Marvel...</h3> <p>
  // Lorem ipsum dolor sit, amet consectetur adipisicing elit. Eveniet cupiditate impedit dolore atque necessitatibus. Laudantium, eveniet aspernatur! Error vel repellat dolore consectetur animi quos voluptatem asperiores, ab soluta, dolores sunt.
      
  //     </p>`

    //*attribute bilgilerinin okunmasi
    // this.getAttribute("title")
    }
    connectedCallback(){
      this.shadowRoot.querySelector("button").addEventListener("click",()=>{
        this.showDetail= !this.showDetail
        if (this.showDetail) {
         this.shadowRoot.querySelector(".detail").style.display="none"
        }
        else{
         this.shadowRoot.querySelector(".detail").style.display="block"
        }
      })
    }
    disconnectedCallback(){
      this.shadowRoot.querySelector("button").removeEventListener("click")
    }
}
window.customElements.define("movie-card",MovieCard)