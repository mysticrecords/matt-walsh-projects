#include "Movies.h"

int main() {

    Movies movies;

    movies.add_movie("Jaws", "R", 10);
    movies.increment_watched("Jaws");

    movies.display();

    return 0;
}