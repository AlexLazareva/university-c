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

// ������������ �������
 for (int i = 0; i < size; i++){
    cout << "arr[" << i << "]=";
    cin >> arr[i];
 }

// ���-������ �������
cout << "Entered array is" << endl;

 for (int i=0; i < size; i++){
    cout << i << " " << setprecision(3) << arr[i] << endl;
 }

// ����� ������������ ��������
    for (int i=0, min=arr[0]; i<size; i++)
        if (arr[i] < min)
            min = arr[i];

// ����� ������� �������������� ��������
    for (int i=0; i < size && arr[i] <= 0; i++);
    sum = 0; // ���� ��� ������ ������������� ���������

//����� ���������� �������������� ��������
    if ((i<size-2) && (arr[i]>0)) {
        for (j=size-1; j>=0 && arr[j]<=0; j--);
        if ((arr[j]>0) && (--j>i))
            while (j>i){
// ����� ��������� ����� ������ � ��������� �������������
                sum+=arr[j--];
            }
    }

    for (i=j=size-1; i>=0;--i){
        if (arr[i]!=0){
            if (i!=j)
                arr[j]=arr[i];
            --j;
        }
    }
    for (int i=0;i<=j;i++) // �������� ������ ������
        arr[i]=0;

// ������ ������ �������
    cout << endl;
    cout << "New array" << endl;

 for (i=0; i<size; i++){
  cout << i << " " << setprecision(3) << arr[i] << endl;
 }
    cout << "Minimal element = " << setprecision(3) << min << endl;
    cout << "Summary between the first and the last element = ";
    cout << setprecision(3);
    cout << sum << endl;
	system("pause");
    return 0;
}
