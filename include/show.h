
#ifndef SHOW_H
#define SHOW_H
#include <string>
#include <string>
using namespace std;

struct Show {
    int id;             // ���������� ID ������
    int hallId;         // ID ����
    string movieTitle;  // �������� ������
    string datetime;    // ���� � �����
};

void addShow();       // �������� ����� �����
void listShows();     // �������� ��� ������
int generateNewShowId();

#endif //SHOW_H
