#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x, y, x2;
    float sum = 0;
    int n = 0;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    if (x != 0) {

        for (int i = 0; i < n; i++)
        {
            x2 = x*x;

            sum += 1 /((2*n + 1) * x2);
        }

        printf("Result is:%f\n", sum);

        exit(0);
    } else {
        printf("x must be not equal 0\n");
        exit(1);
    }
}
