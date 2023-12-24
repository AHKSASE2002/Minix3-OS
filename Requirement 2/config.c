#include <stdio.h>
#include <stdlib.h>

int main() {
    // Display menu
    printf("Select a scheduling algorithm:\n");
    printf("1. MFQ\n");
    printf("2. PR\n");
    printf("3. SJF\n");
    printf("4. RR\n");

    // Prompt user for input
    int choice;
    printf("Enter the number of the scheduling algorithm: ");
    scanf("%d", &choice);

    // Check user input and execute corresponding script
    switch (choice) {
        case 1:
            system("sh mfq.txt");
            break;
        case 2:
            system("sh pr.txt");
            break;
        case 3:
            system("sh sjf.txt");
            break;
        case 4:
            system("sh rr.txt");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
    }

    return 0;
}
