import { createBrowserRouter } from "react-router-dom"

const routes = createBrowserRouter([
  { path: "/", element: "anasayfa componenti" },
  { path: "/explore", element: "explore componenti" },
  { path: "/notificatilons", element: "bildirimler componenti" },
])

export default routes
