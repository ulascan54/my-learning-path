import HomeContainer from "@/containers/home"

import Movies from "@/mocks/movies.json"

async function delay(ms) {
  return new Promise((resolve) => setTimeout(resolve, ms))
}
async function HomePage({ params }) {
  await delay(2000)

  let selectedCategory
  console.log(params.category)
  if (params.category !== undefined) {
    selectedCategory = true
  }
  return (
    <HomeContainer
      selectedCategory={{
        id: params.category?.[0] ?? "",
        movies: selectedCategory ? Movies.results.slice(0, 7) : [],
      }}
    />
  )
}

export default HomePage
