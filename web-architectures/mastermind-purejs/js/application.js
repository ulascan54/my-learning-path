class Application {
  constructor(viewModel) {
    //dependency injection
    // #region view
    this.viewModel = viewModel
    this.tries = document.querySelector("#tries")
    this.gameLevel = document.querySelector("#gamelevel")
    this.guess = document.querySelector("#guess")
    this.playButton = document.querySelector("#play")
    this.history = document.querySelector("#moves")
    // #endregion view

    // #region event listeners
    this.playButton.addEventListener(
      "click",
      () => {
        let guess = this.guess.value
        this.viewModel.play(guess)
        this.updateView()
      },
      false
    )
    // #endregion event listeners
  }

  updateView = () => {
    // view model -- dom api --> view
    this.tries.innerText = this.viewModel.tries
    this.gameLevel.innerText = this.viewModel.gameLevel
    this.emptyElement(this.history)
    for (let move of this.viewModel.moves) {
      let tr = this.history.insertRow()
      let cellGuess = tr.insertCell(0)
      let cellMessage = tr.insertCell(1)
      cellGuess.appendChild(document.createTextNode(move.guess))
      cellMessage.appendChild(document.createTextNode(move.message))
    }
  }

  emptyElement = (element) => {
    let node = element
    while (element.hasChildNodes()) {
      if (node.hasChildNodes()) {
        node = node.lastChild
      } else {
        node = node.parentNode
        node.removeChild(node.lastChild)
      }
    }
  }
}
let model = new GameViewModel()

window.onload = () => {
  //Document is ready !
  // event-triggered
  let model = new GameViewModel()
  let application = new Application(model)
  //View
}
