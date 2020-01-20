#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<stdio.h>
#include<conio.h>

//#define size 10
using namespace std;

int main (){

const int size = 5;
 double arr[size];
 double sum;
 double min;
 double minI, maxI;
 int i,j;

// формирование массива
 for (int n = 0; n < size; n++){
    cout << "arr[" << n << "]=";
    cin >> arr[n];
 }

// эхо-печать массива
cout << "Entered array is" << endl;

 for (int n = 0; n < size; n++){
    cout << n << " " << arr[n] << endl;
 }

// поиск минимального элемента
    for (int n = 0, min = arr[0]; n < size; n++)
    {
        cout << "in cicle: " << n << ":" << fixed << min << endl;
        if (arr[n] < min)
            min = arr[n];
    }

cout << "min: " << min << endl;
// поиск первого положительного элемента
    for (int n = 0; n < size; n++) {
        if(arr[n] > 0) {
            minI = n;
            break;
        }
    }
    cout << "minI: " << minI << endl;


   for (int n = 0, maxI = arr[0]; n < size; n++) {
        if (arr[n] > 0) {
            maxI = n;
            break;
        }

   }
   cout << "maxI: "<< maxI << endl;

   /*for (int n = minI + 1; n < maxI; n++) {
        sum += arr[n];
    }*/

// печать нового массива
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
