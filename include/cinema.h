
#ifndef CINEMA_H
#define CINEMA_H


struct Cinema {
    int id;
    char name[100];
    char city[100];
};
extern Cinema cinemas[10];
extern int cinemacount;


void addCinema();
void showCinemas();
void loadCinemasFromFile();
#endif //CINEMA_H
