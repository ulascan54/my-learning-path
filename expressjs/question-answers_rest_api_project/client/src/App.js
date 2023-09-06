import "./App.css"
import { BrowserRouter as Router, Route, Routes } from "react-router-dom"
function App() {
  return (
    <div className="App">
      <Router>
        <div>
          <Navbar />
          <div id="content">
            <Routes>Route</Routes>
          </div>
        </div>
      </Router>
    </div>
  )
}

export default App
