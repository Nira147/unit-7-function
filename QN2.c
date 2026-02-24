#include <stdio.h>

#define PI 3.14

// Function returning value
float circleArea(float radius)
{
    float area;
    area = PI * radius * radius;
    return area;   // returning value
}

int main()
{
    float r, result;

    printf("Enter radius: ");
    scanf("%f", &r);

    result = circleArea(r);   // function call

    printf("Area of Circle = %.2f", result);

    return 0;
}