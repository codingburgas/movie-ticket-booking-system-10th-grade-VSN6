
#ifndef USER_H
#define USER_H
#include <string>
using namespace std;


class user {

public:
        string username;
        string password;
        string role;

    user();
        bool registerUser();
        bool loginUser();
    };


#endif 
