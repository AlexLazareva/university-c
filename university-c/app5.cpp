#include<bits/stdc++.h>

using namespace std;
const int MAX = 100;


// ��������� ����������� ������� ������� � �������� ����������� ������� ������� 0
void replaceMinInCol(int mat[][MAX], int n, int m){
    for(int i = 0; i < m; i++)
    {
        int minm = mat[0][i];
        cout << " {";

        for(int j = 1; j < n; j++)
        {
            if(mat[j][i] < minm)
                minm = mat[j][i];
                minm = 0;

                // ����� �������� ������
                cout << mat[j][i] << ", ";
        }

        // ����� ����������� �������� ������
        cout << minm << ", ";
        cout << "} \n";
    }
}

// ����� ����� ������ ��������� � �������
void calculateSumOddElements(int mat[][MAX], int row, int col) {
    int sum = 0;

    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++)
        {
            // ���������, �������� ������� ������� ������
            if(mat[i][j] % 2 == 0)
            {
                // ��������� ��� ������ ��������
                sum += mat[j][i];
            }
        }
    }
    cout << "Summary all odd elements of array in columns is: " << sum;
}



int main(){
    int n = 3, m = 3;

    int mat[][MAX] = {
        {2, 1, 7},
        {3, 7, 2},
        {5, 4, 9}
    };

    cout << "Initial array is: \n";
    for(int i = 0; i < n; i++){
        cout << " {";
        // ����������� �� ������� ������������ ������� � ������������� ��������
        for(int j = 0; j < m; j++){
            cout << mat[i][j] << " ";
        }
        cout << "} \n";
    }

    cout << "\n Replace to 0 the minimum element of each columns: \n";
    replaceMinInCol(mat, n, m);

    calculateSumOddElements(mat, n, m);

    return 0;
}
