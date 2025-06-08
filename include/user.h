
#ifndef USER_H
#define USER_H
#include <string>
using namespace std;


class user {

    private:
        string username;
        string password;

    public:
        user();
        bool registerUser();
        bool loginUser();
    };


#endif //USER_H
