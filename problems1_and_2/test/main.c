#include <stdio.h>


int isMultiple(int *a, int *b);

void squareOfTwoNumbers(double *a, double *b);

int main(void) {
    int a = 1, b = 5;
    int c = 0;
    double d1 = 2.3, d2 = 2.5;
    squareOfTwoNumbers(&d1, &d2);
    printf("%lf %lf %d\n", d1, d2, isMultiple(&a, &b));
    squareOfTwoNumbers(&d1, &d2);
    printf("%lf %lf %d\n", d1, d2, isMultiple(&c, &b));
    squareOfTwoNumbers(&d1, &d2);
    printf("%lf %lf %d\n", d1, d2, isMultiple(&b, &a));

    return 0;
}
