
#ifndef SHOW_H
#define SHOW_H
#include <string>
using namespace std;
struct Show {
    int showId;
    char cinemaName[50];
    char movieName[50];
    char time[20];
};
void addShow();

void listShows();

#endif //SHOW_H
