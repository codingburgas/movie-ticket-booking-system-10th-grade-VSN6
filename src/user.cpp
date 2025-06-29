#include "user.h"
#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

user::user() {}

bool user::registerUser() {
  cout << "Registering user" << endl << "Enter username: " << endl;
  cin >> username;
  cout << endl;
  cout << "Enter password: " << endl;
  cin >> password;
  cout << endl;

  role = (username == "admin" && password == "admin123") ? "admin" : "user";

  if (username == "admin" && password == "admin123") {
    role = "admin";
  }
  else{
    role = "user";
  }

  ofstream file("users.txt", ios::app);

  if(!file){
    cout << "File could not be created" << endl;
    return false;
  }

  file <<username<< " " <<password<< " " <<role<< endl;
  file.flush();
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
  string fileUser, filePass, fileRole;

  while (file>>fileUser>>filePass>>fileRole) {
    if (inputUser==fileUser && inputPassw ==filePass) {
      username=fileUser;
      password=filePass;
      role =fileRole;

      cout << "Succesful login"<< endl;
      return true;
     }
  }

  cout << "User not found" << endl;
  return false;
}




