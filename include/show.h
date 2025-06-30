
#ifndef SHOW_H
#define SHOW_H
#include <string>
#include <string>
using namespace std;

struct Show {
    int id;             // уникальный ID сеанса
    int hallId;         // ID зала
    string movieTitle;  // название фильма
    string datetime;    // дата и время
};

void addShow();       // добавить новый сеанс
void listShows();     // показать все сеансы
int generateNewShowId();

#endif //SHOW_H
