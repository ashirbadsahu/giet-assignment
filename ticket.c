//Write a program for a bus ticketing system.
#include <stdio.h>

int main(){
    int choice;
    int numTickets;
    double distance;
    double ppkm = 0.5; // Price per kilometer
    double total;

    printf("Welcome to the Bus Ticketing system! Choose your destination from GIET, Gunpur.\n");
    printf(" 1. Raygada \n 2. Bhubaneswar \n 3. Cuttack \n 4. Puri \n 5. Sambalpur \n");
    printf("Enter your choice(1/2/3/4/5): ");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        printf("You have selected Raygada\n");
        distance = 72;
        break;
    case 2:
        printf("You have selected Bhubaneswar\n");
        distance = 300;
        break;
    case 3:
        printf("You have selected Cuttack\n");
        distance = 275;
        break;
    case 4:
        printf("You have selected Puri\n");
        distance = 335;
        break;
    case 5:
        printf("You have selected Sambalpur\n");
        distance = 300;
        break;    
    
    default:
        printf("Invalid choice. Please select a valid option.\n");
        return 1;
    }

    printf("Enter the number of tickets you want to book: ");
    scanf("%d", &numTickets);

    total = numTickets * distance * ppkm;

    printf("Your total fare is: %.2f rupees.\n", total);
    return 0;
}