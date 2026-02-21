#include <stdio.h>
#include "menu.h"

int main() {
    struct MenuItem menu[MAX_ITEMS];
    int count = 0;
    int choice;

    printf("===== WELCOME TO RESTAURANT MANAGEMENT SYSTEM =====\n");

    do {
        printf("\n1. Add Menu Item\n");
        printf("2. Display Menu\n");
        printf("3. Take Order & Generate Bill\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addItem(menu, &count);
                break;
            case 2:
                displayMenu(menu, count);
                break;
            case 3:
                takeOrder(menu, count);
                break;
            case 0:
                printf("Exiting... Thank you!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 0);

    return 0;
}
