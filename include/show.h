
#ifndef SHOW_H
#define SHOW_H
#include <string>
#include <string>
using namespace std;

struct Show{
    int id;             
    int hallId;         
    string movieTitle;  
    string datetime;  
    float price;
};



void addShow();       
void listShows();    
int generateNewShowId();
void updateShowPrice();

#endif 
