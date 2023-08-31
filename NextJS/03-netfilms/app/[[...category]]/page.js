import HomeContainer from "@/containers/home"

import Movies from "@/mocks/movies.json"

function HomePage({ params }) {
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
