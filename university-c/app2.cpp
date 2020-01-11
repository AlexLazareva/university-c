#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
    float x, y, z;

    printf("Задайте х: ");
    scanf("%d", &x);

    for (int i = 1; i < x; i++)
    {
        z = 1 / (i*pow(x,i));
    }
    
    y = 2 * z;
    
    printf("Результат:%f\n", y);

}