#include <stdio.h>

// Function using pass by reference
int isPrime(int *n)
{
    int i;

    if (*n <= 1)
        return 0;

    for (i = 2; i <= (*n) / 2; i++)
    {
        if (*n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = isPrime(&num);   // pass by reference

    if (result == 1)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}