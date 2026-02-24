#include <stdio.h>

// Function with parameter (pass by value)
void displaynumber(int num)
{
    printf("Number = %d", num);
}

int main()
{
    int number = 100;

    // Calling function from main()
    displaynumber(number);   // pass by value

    return 0;
}