import Logo from "./logo"
import Menu from "./menu"

export default function Sidebar() {
  return (
    <aside className="w-[275px] min-h-screen px-2">
      <Logo />
      <Menu />
    </aside>
  )
}
