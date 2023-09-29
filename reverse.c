// Write a program to reverse a nuumber.
#include <stdio.h>

int main(){
    double number;
    double reverse;

    printf("Enter a number: ");
    scanf("%lf", &number);

    while (number != 0)
    {
        reverse = reverse * 10 + number - (int)(number / 10) * 10;
        number = (int)(number / 10);
    }

    printf("The reverse of the number is: %.0lf\n", reverse);
    return 0;
}