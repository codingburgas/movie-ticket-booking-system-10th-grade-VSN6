#include <movie.h>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
Movie::Movie() {}

Movie::Movie(string t, string g, int d, string r){
    title =t;
    genre= g;
    duration = d;
    rating = r;
}


string Movie::toString() const {
    return title+"|"+genre+ "|"+to_string(duration) + "|" +rating;
}

vector<Movie> loadMovies(){
    vector<Movie> movies;
    ifstream file("movies.txt");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string title, genre, durationStr,rating;
        getline(ss, title, '|');
        getline(ss, genre, '|');
        getline(ss, durationStr, '|');
        getline(ss, rating, '|');
        int duration=stoi(durationStr);
        movies.push_back(Movie(title, genre, duration, rating));
    }
    return movies;
}

void saveMovies(const vector<Movie>& movies) {
    ofstream file("movies.txt");
    for (const Movie& m : movies) {
        file << m.toString() << endl;
    }
}
void showMovies(const vector<Movie>& movies){
    cout << "--- Films list ---" << endl;

    for (const Movie& m : movies) {
        cout << m.title << " | " << m.genre <<" | " <<m.duration << " minutes | "<<m.rating<<endl;
    }

}

void addMovie(vector<Movie>& movies) {
    string title,genre, rating;

    int duration;
    cin.ignore();
    cout << "Movie title: ";
    getline(cin, title);

    for (const auto& m : movies) {
        if (m.title == title) {
            cout << "Movie with this title already added" << endl;
            return;
        }

    }
    cout << "Genre: ";
    getline(cin, genre);
    cout << "Duration (minutes): ";
    cin >> duration;
    cin.ignore();
    cout << "Rating: ";
    getline(cin, rating);

    Movie newMovie(title, genre, duration, rating);
    movies.push_back(newMovie);
    saveMovies(movies);

    cout <<"Movie added!"<<endl;

}

void removeMovie(vector<Movie>& movies){
    if (movies.empty()) {
        cout <<"There are no movies to delete" << endl;
        return;

    }

    cout << "--- Removing a movie ---" << endl;
    for (size_t i = 0; i < movies.size(); ++i) {
        cout << i + 1 << ". " << movies[i].title << endl;
    }

    cout << "Enter the movie number to delete: ";
    int index;
    cin >> index;
    if (index < 1 || index > (int)movies.size()) {
        cout << "Invalid number." << endl;
        return;
    }
    string deletedTitle=movies[index- 1].title;
    movies.erase(movies.begin() + index - 1);
    saveMovies(movies);


    cout << "Movie "<< deletedTitle<<" deleted." << endl;

}
