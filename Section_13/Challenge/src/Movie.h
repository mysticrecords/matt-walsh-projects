#pragma once

#include <string>

class Movie 
{
    private:
        std::string name;
        std::string rating;
        int watched = 1;

    public:
    //Constructor
    Movie(std::string name, std::string rating, int watched);

    //Copy constructor
    Movie(const Movie &source);

    //Destructor
    ~Movie();

    //Getters and Setters
    std::string get_name() const {return name;}
    std::string get_rating() const {return rating;}
    int get_watched() const {return watched;}

    void set_name(std::string name) {this->name=name;}
    void set_rating(std::string rating) {this->rating=rating;}
    void set_watched() {++watched;}

    void display() const;

};
