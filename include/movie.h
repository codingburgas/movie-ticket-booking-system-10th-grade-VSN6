
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <vector>
using namespace std;

class Movie {
public:
    string title;
    string genre;
    int duration;
    string rating;

    Movie();
    Movie(string t, string g, int d, string r);
    string toString() const;
};

vector<Movie> loadMovies();
void saveMovies(const vector<Movie>& movies);
void showMovies(const vector<Movie>& movies);
void addMovie(vector<Movie>& movies);
void removeMovie(vector<Movie>& movies);


#endif //MOVIE_H
