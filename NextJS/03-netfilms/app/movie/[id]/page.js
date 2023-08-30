import MovieContainer from "@/containers/movie"
import React from "react"
import Movies from "@/mocks/movies"
import Movie404 from "./not-found.js"
import Movie500 from "./error.js"

async function delay(ms) {
  return new Promise((resolve) => setTimeout(resolve, ms))
}

async function MoviePage({ params, searchParams }) {
  await delay(2000)
  const movieDetail = Movies.results.find(
    (movie) => movie.id.toString() === params.id
  )

  if (!movieDetail) {
    return <Movie404 />
  }

  if (searchParams.error === "true") {
    return <Movie500 />
  }

  return <MovieContainer movie={movieDetail} />
}

export default MoviePage
