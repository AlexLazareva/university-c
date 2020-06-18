#include <iostream>
#include <conio.h>

using namespace std;

#define DBG_MSG(N, M) do{ cout << "x= " << (N) << " y= " << (M) << endl; _getch();} while(false);

int akkermanFunc(int x, int y)
{
    //вычисляем a(0,y)=y+1;
    if(x !=0 && y == 0)
    {
        // вычисляем a(x,0)= a(x-1,1);
        DBG_MSG(x, y);
        return akkermanFunc(x - 1, 1);
    }
    else if(x > 0 && y > 0)
    {
       DBG_MSG(x, y);
       // вычисляем выражение a(x,y)= a(x-1, a(x, y -1));
       int result = akkermanFunc(x, y - 1);
       return akkermanFunc(x - 1, result);
    }
    DBG_MSG(x, y);
    return y + 1;
}
// точка входа
int main()
{
    int x = 0;
    int y = 0;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    int result = akkermanFunc(x, y);
    cout << "Result is: " << result << endl;
    _getch();
}
