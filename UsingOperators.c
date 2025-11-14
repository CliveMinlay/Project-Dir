//MINLAY, CLIVE DUSTINE M. DIT 1-2
#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int sum, diff, prod, quotient;
    int result;

    printf("Values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n\n", c);

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quotient = a / b;

    printf("Arithmetic Operations Using A and B:\n");
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);
    printf("Multiplication: %d\n", prod);
    printf("Division: %d\n\n", quotient);

    printf("Logical Operations (1 means true and 0 means false):\n");
    result = (a < 15 && a > 5);
    printf("AND (a < 15 && a > 5): %d\n", result);

    result = (b < 3 || b > 2);
    printf("OR (b < 3 || b > 2): %d\n", result);

    result = !(c < 5 && c > 1);
    printf("NOT (!(c < 5 && c > 1)): %d\n\n", result);

    printf("Assignment Operations:\n");
    a += 2;
    b *= 3;

    printf("Updated a (a += 2): %d\n", a);
    printf("Updated b (b *= 3): %d\n", b);

    return 0;

}