#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<stdio.h>
#include<conio.h>

//#define size 10
using namespace std;

int main (){

const int size = 5;
 double arr[size] = {0};
 double sum = 0;
 double min = 0;
 double minI = 0, maxI = 0;
 int i,j;

// ������������ �������
 for (int n = 0; n < size; n++){
    cout << "arr[" << n << "]=";
    cin >> arr[n];
 }

// ���-������ �������
cout << "Entered array is" << endl;

 for (int n = 0; n < size; n++){
    cout << n << " " << arr[n] << endl;
 }

// ����� ������������ ��������
min = arr[0];

for (int n = 0; n < size; n++) {
    if (arr[n] < min)
        min = arr[n];
}

// ����� ������� �������������� ��������
    for (int n = 0; n < size; n++) {
        if(arr[n] > 0) {
            minI = n;
            break;
        }
    }

   for (int n = 0; n < size; n++) {
        if (arr[n] > 0) {
            maxI = n;
        }
   }


for (int n = minI + 1; n < maxI; n++) {
    sum += arr[n];
}

// ������ ������ �������
    cout << endl;
    cout << "New array" << endl;

 for (i = 0; i < size; i++){
  cout << i << " " << arr[i] << endl;
 }
    cout.precision(2);
    cout << "Minimal element = " << fixed << min << endl;
    cout << "Summary between the first and the last element = ";
    cout << sum << endl;
	system("pause");
    return 0;
}
