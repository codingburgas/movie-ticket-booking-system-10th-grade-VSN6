
#ifndef MOVIE_H
#define MOVIE_H

void listMovies();
void addMovie();

struct movie {
    char name[100];
    int year;
};



#endif //MOVIE_H
