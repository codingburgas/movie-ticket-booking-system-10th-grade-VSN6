#include <iostream>
#include "movie.h"
using namespace std;

int moviecount=0;
movie movies[100];

void addMovie() {
    if (moviecount>=100) {
cout << "Movie list is full" << endl;
        return;
    }


    cout << "Enter title: " << endl;
    cin.ignore();
    cin.getline(movies[moviecount].name, 100);
    cout << "Enter year: ";
    cin >> movies[moviecount].year;
    moviecount++;
    cout << endl << "Movie added" << endl;
}

void listMovies() {
for (int i = 0; i < moviecount; i++) {

    cout << "Movie name:" << movies[i].name << endl;
    cout << "Movie year:" << movies[i].year << endl;
}

}