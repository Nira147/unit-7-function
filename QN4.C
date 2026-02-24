#include <stdio.h>

// Function using pointer parameters
void calculate(int a, int b, int *sum, int *diff, int *prod)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
}

int main()
{
    int x, y;
    int s, d, p;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Passing addresses (pointer parameters)
    calculate(x, y, &s, &d, &p);

    printf("Sum = %d\n", s);
    printf("Difference = %d\n", d);
    printf("Product = %d\n", p);

    return 0;
}