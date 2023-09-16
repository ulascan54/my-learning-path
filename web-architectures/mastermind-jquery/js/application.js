class Application {
  constructor(viewModel) {
    //dependency injection
    this.viewModel = viewModel
    // #region view
    this.tries = $("#tries")
    this.gameLevel = $("#gamelevel")
    this.guess = $("#guess")
    this.playButton = $("#play")
    this.history = $("#moves")
    // #endregion view

    // #region event listeners
    this.playButton.click(() => {
      //Callback function
      this.viewModel.play(this.guess.val())
      this.updateView()
    })
    // #endregion event listeners
  }

  updateView = () => {
    // ViewModel -- jQuery --> View
    this.tries.text(this.viewModel.tries)
    this.gameLevel.text(this.viewModel.gameLevel)
    this.history.empty()
    for (let move of this.viewModel.moves) {
      let tr = `  <tr>
                    <td>${move.guess}</td>
                    <td>${move.message}</td>
                  </tr>`
      this.history.append(tr)
    }
  }
}

let model = new GameViewModel()
$(document).ready(() => {
  //event-triggered -> Callback function
  //Document is ready !
  // event-triggered
  let application = new Application(model)
  //View
})
