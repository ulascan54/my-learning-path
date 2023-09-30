import classNames from "classnames"
import { NavLink } from "react-router-dom"

export default function Menu() {
  return (
    <nav className="mt-0.5 mb-1">
      <NavLink to="/" className="py-1 block group">
        {({ isActive }) => (
          <div
            className={classNames(
              "p-3 rounded-full transition-colors inline-flex items-center gap-5 bg-transparent  group-hover:bg-[#eff3f41a]",
              { "font-bold": isActive }
            )}
          >
            {isActive && (
              <svg
                viewBox="0 0 24 24"
                className="block"
                width={26.25}
                height={26.25}
              >
                <path
                  fill="#e7e9ea"
                  d="M12 1.696L.622 8.807l1.06 1.696L3 9.679V19.5C3 20.881 4.119 22 5.5 22h13c1.381 0 2.5-1.119 2.5-2.5V9.679l1.318.824 1.06-1.696L12 1.696zM12 16.5c-1.933 0-3.5-1.567-3.5-3.5s1.567-3.5 3.5-3.5 3.5 1.567 3.5 3.5-1.567 3.5-3.5 3.5z"
                ></path>
              </svg>
            )}
            {!isActive && (
              <svg
                viewBox="0 0 24 24"
                aria-hidden="true"
                className="block"
                width={26.25}
                height={26.25}
              >
                <path
                  fill="#e7e9ea"
                  d="M12 9c-2.209 0-4 1.791-4 4s1.791 4 4 4 4-1.791 4-4-1.791-4-4-4zm0 6c-1.105 0-2-.895-2-2s.895-2 2-2 2 .895 2 2-.895 2-2 2zm0-13.304L.622 8.807l1.06 1.696L3 9.679V19.5C3 20.881 4.119 22 5.5 22h13c1.381 0 2.5-1.119 2.5-2.5V9.679l1.318.824 1.06-1.696L12 1.696zM19 19.5c0 .276-.224.5-.5.5h-13c-.276 0-.5-.224-.5-.5V8.429l7-4.375 7 4.375V19.5z"
                ></path>
              </svg>
            )}
            <div className="pr-4 text-xl">Anasayfa</div>
          </div>
        )}
      </NavLink>
    </nav>
  )
}
