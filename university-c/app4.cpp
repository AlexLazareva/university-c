#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;
struct Team {
        char * name[20];
        char * city[20];
        char * instructor;
        char * rate;
    } team;

int main() {
    Team team[10]; // создали список команд
    cout << "name:";
    cin >> team.name;
    cout << "city:";
    cin >> team.city;
    cout << "instructor name:";
    cin >> instructor.name;

    getch();
    return 0;
};
