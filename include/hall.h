#ifndef HALL_H
#define HALL_H

const int rows = 5;
const int cols = 5;

struct Hall {
    int id;           
    int cinemaId;    
};

void addHall();               
void showHallSeats();           
void saveHallSeats(int hallId, float[rows][cols]); 
void loadHallSeats(int hallId, float[rows][cols]);  
void listHalls();                          
int generateNewHallId();                   

#endif

