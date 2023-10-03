import { GameViewModel } from "./game.js"

let model = new GameViewModel()
window.onload = () => {
  // Todo: bind viewmodel to view
  ko.applyBindings(model)
}
