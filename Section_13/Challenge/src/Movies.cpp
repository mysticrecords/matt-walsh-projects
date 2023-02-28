#pragma once

#include <iostream>

#include "Movies.h"

Movies::Movies() {

}
Movies::~Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for(const Movie &movie: movies) {
            if(movie.get_name() == name) {
                std::cout << "Sorry this movie has already been added to the list" << std::endl;
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
    if(movies.size() == 0) {
        std::cout << "Sorry there are no movies to display" << std::endl;
    } else {
        for(auto movie: movies) {
            std::cout << "--------------------------------" <<std::endl;
            movie.display();
            std::cout << "--------------------------------" <<std::endl;
        }  
    }
};

    