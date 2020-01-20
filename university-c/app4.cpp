#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

struct Team {
        char * name[20];
        char * city[20];
        char * instructor[20];
        char * rate[3];
    } team[10]; // создали список из 10 команд

struct search {
    char * isNull[15];
    char * d[15];
} search[2];

int i = 0,
    mount = 0;

// ввод данных команды
void inputData() {
    i = mount;

    cout << "name: ";
    cin >> team[i].name;
    cout << "city: ";
    cin >> team[i].city;
    cout << "instructor name: ";
    cin >> team[i].instructor;
    cout << "rate: ";
    cin >> team[i].rate;

    system("pause");
    mount++;
}

int main() {


    getch();
    return 0;
};
