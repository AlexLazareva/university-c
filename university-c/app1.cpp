#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define PROMPT ':'

main() {
    float a,b,rez;
    char oper;

    while (putch(PROMPT), scanf("%f%c%f", &a, &oper, &b) !=EOF)
    {
        switch (oper)
        {
        case '+':
            rez=a+b;
            break;

        case '-':
            rez=a-b;
            break;
        
        case '*':
            rez=a*b;
            break;
        case '/':
            rez=a/b;
            break;

        default:
            printf("Ошибка \n");
            exit(1);
        }
        printf("Результат:%f\n", rez);
    }
    
}