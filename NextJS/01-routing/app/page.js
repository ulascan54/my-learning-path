import Link from "next/link"

export default function Home() {
  return (
    <div>
      <Link href="/about">hakkımızda</Link>
      <Link href="/docs/post-1">post1</Link>
      <Link href="/docs/post-2">post2</Link>
      <Link
        className="tests "
        href={{ pathname: "/about", query: { name: "Next.js", surname: "ff" } }}
      >
        hakkımızda obje
      </Link>
    </div>
  )
}
