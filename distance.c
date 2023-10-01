#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distance;
    printf("Enter x coordinate of point 1: ");
    scanf("%f", &x1);
    printf("Enter y coordinate of point 1: ");
    scanf("%f", &y1);
    printf("Enter x coordinate of point 2: ");
    scanf("%f", &x2);
    printf("Enter y coordinate of point 2: ");
    scanf("%f", &y2);

    distance = sqrt((pow(x2, 2) - pow(x1, 2)) + (pow(y2, 2) - pow(y1, 2)));

    printf("\n");
    printf("Distance between point 1 and 2 is: %f.", distance);
}