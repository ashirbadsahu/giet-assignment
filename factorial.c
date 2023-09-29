// Write a program to find the factorial of a number.

#include <stdio.h>

int main(){
    int number;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is: %d\n", number, factorial);
}