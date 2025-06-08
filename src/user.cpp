#include "user.h"
#include <iostream>
#include <fstream>
using namespace std;

user::user() {}

bool registerUser() {
  cout << "Registering user" << endl << "Enter username: " << endl;
  cin << this->username << endl;
  cout << "Enter password: " << endl;
  cin << this->password << endl;


  ofstream file("users.txt", ios::app);

  if(!file){
    cout << "File could not be created" << endl;
    return false;
  }

  file << username << " " << password << endl;
  file.close();
  cout << "Registration was successful" << endl;
  return true;
}

bool user::loginUser() {
  string inputUser, inputPassw;
  cout << "Enter username: " << endl;
  cin >> inputUser;
  cout << "Enter password: " << endl;
  cin >> inputPassw;


  ifstream file("users.txt");
  string user, pass;

  while (file >> user >> pass) {
    if (user == inputUser && pass == inputPassw){

      cout << "Succesful login" << endl;
      return true;
     }
  }

  cout << "User not found" << endl;
  return false;
}




