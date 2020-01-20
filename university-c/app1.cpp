#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() {
    float a,b,rez;
    char oper;
    int answer;

    printf("Enter 0 or 1: ");
    scanf("%i", &answer);

    while (answer == 1) {
            scanf("%f%c%f", &a, &oper, &b);
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
                printf("Error \n");
                exit(1);
            }
            printf("Result is: %f\n", rez);
            printf("Continue? 1 - yes, 0 - no: ");
            scanf("%i", &answer);
        }
    }

