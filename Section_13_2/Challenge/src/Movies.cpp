#include <string>
#include <iostream>

#include "Movies.h"

Movies::Movies() {

}

Movies::~Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for(const Movie &movie: movies) {
        if(movie.get_name() == name) {
            std::cout << "Sorry this movie has already been added" << std::endl;
            return false;
        }
    }

    Movie temp {name, rating, watched};
    movies.push_back(temp);
    return true;
}

bool Movies::increment_watched(std::string name) {
    for(Movie &movie: movies) {
        if(movie.get_name() == name) {
            movie.set_watched();
            return true;
        }
    }

    return false;
}

void Movies::display() const {
    for(auto movie: movies) {
        movie.display();
    }
}