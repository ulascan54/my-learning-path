import React from "react"
import Movies from "@/mocks/movies.json"
import Genres from "@/mocks/genres.json"
import FeaturedMovie from "@/components/featured-movie"
import Categories from "@/components/categories"
import MoviesSection from "@/components/movies-section"

function HomeContainer({ selectedCategory }) {
  return (
    <div>
      <FeaturedMovie movie={Movies.results[0]} />
      <Categories categories={Genres.genres.slice(0, 5)} />
      {selectedCategory.movies.length > 0 && (
        <MoviesSection
          title={
            Genres.genres.find((genre) => `${genre.id}` === selectedCategory.id)
              .name + " Films"
          }
          movies={selectedCategory.movies}
        />
      )}

      <MoviesSection
        title="Populer Fılms"
        movies={Movies.results.slice(1, 7)}
      />
      <MoviesSection
        title="Your Favortıes"
        movies={Movies.results.slice(7, 13)}
      />
    </div>
  )
}

export default HomeContainer
