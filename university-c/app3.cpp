#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<stdio.h>
#include<conio.h>

//#define size 10
using namespace std;

int main (){

const int size = 10;
 double arr[size];
 double sum;
 double min;
 int i,j;
 double value;

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
        if (arr[n] < min)
            min = arr[n];

// поиск первого положительного элемента
    for (int n = 0; n < size && arr[n] <= 0; n++);
    sum = 0; // если нет вообще положительных элементов

//поиск последнего положительного элемента
    if ((i < size - 2) && (arr[i] > 0)) {
        for (j = size-1; j >= 0 && arr[j] <= 0; j--);
        if ((arr[j] > 0) && (--j > i))
            while (j > i){
// сумма элементов между первым и последним положительным
                sum += arr[j--];
            }
    }

    for (i = j = size - 1; i >= 0; --i){
        if (arr[i]!= 0){
            if (i != j)
                arr[j] = arr[i];
            --j;
        }
    }
    for (i = 0; i <= j; i++) // заполним начало нулями
        arr[i] = 0;

// печать нового массива
    cout << endl;
    cout << "New array" << endl;

 for (i = 0; i < size; i++){
  cout << i << " " << arr[i] << endl;
 }
    cout << "Minimal element = " << min << endl;
    cout << "Summary between the first and the last element = ";
    //cout << setprecision(3);
    cout << sum << endl;
	system("pause");
    return 0;
}
