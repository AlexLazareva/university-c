#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int count = 0;
    string s, word;

    cout << "������� ������: \n";
    getline(cin, s);

    stringstream words(s);
    while(words >> word)
    {
        if(word[word.size() - 1] == '�') count++;
    }

    cout << "���������� ���� = " << count << "\n";

    return 0;
}
