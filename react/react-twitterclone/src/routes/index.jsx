import { createBrowserRouter } from "react-router-dom"
import Home from "@/pages/home"
import Explore from "@/pages/expolore"
import Notifications from "@/pages/notifications"
const routes = createBrowserRouter([
  { path: "/", element: <Home /> },
  { path: "/explore", element: <Explore /> },
  { path: "/notifications", element: <Notifications /> },
])

export default routes
