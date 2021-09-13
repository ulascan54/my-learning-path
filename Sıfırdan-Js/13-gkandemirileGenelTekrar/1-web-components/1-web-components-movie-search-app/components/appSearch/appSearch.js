const searchTemplate = document.createElement("template")
searchTemplate.innerHTML=`
<style>
@import url('http://${location.host}/components/appSearch/appSearch.css')
</style>
<input type="text" autofocus placeholder="Film adını yazın ve enter tuşuna basınız..." class="search_text">

`
class AppSearch  extends HTMLElement{
  constructor(){
    super()
    this.attachShadow({mode:"open"})
    this.shadowRoot.appendChild(searchTemplate.content.cloneNode(true))
  }

  connectedCallback(){
    const search_text = this.shadowRoot.querySelector(".search_text")
    search_text.addEventListener("keydown", (e) => {
    if (e.keyCode == 13) {
      document.querySelector("#app").setAttribute("searchText",search_text.value)
    }
   })
  }
}
window.customElements.define("app-search",AppSearch)