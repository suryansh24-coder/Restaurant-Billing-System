#include <stdio.h>
#include <string.h>
#include "menu.h"

// Add a new menu item
void addItem(struct MenuItem menu[], int *count) {
    if (*count >= MAX_ITEMS) {
        printf("Menu is full!\n");
        return;
    }
    printf("Enter item name: ");
    getchar(); // consume leftover newline
    fgets(menu[*count].name, 50, stdin);
    menu[*count].name[strcspn(menu[*count].name, "\n")] = 0; // remove newline

    printf("Enter item price: ");
    scanf("%f", &menu[*count].price);

    menu[*count].id = *count + 1;
    (*count)++;

    printf("Item added successfully!\n\n");
}

// Display the menu
void displayMenu(struct MenuItem menu[], int count) {
    printf("\n----------- RESTAURANT MENU -----------\n");
    printf("ID\tITEM\t\tPRICE\n");
    printf("--------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s %.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
    printf("--------------------------------------\n");
}

// Take customer order and generate bill
void takeOrder(struct MenuItem menu[], int count) {
    if (count == 0) {
        printf("Menu is empty! Add items first.\n");
        return;
    }

    int itemID, qty;
    char choice;
    float total = 0;

    printf("\n--- TAKE ORDER ---\n");
    do {
        displayMenu(menu, count);
        printf("Enter Item ID: ");
        scanf("%d", &itemID);

        if (itemID < 1 || itemID > count) {
            printf("Invalid Item ID!\n");
            continue;
        }

        printf("Enter Quantity: ");
        scanf("%d", &qty);

        total += menu[itemID - 1].price * qty;

        printf("Add more items? (y/n): ");
        getchar(); // consume newline
        choice = getchar();

    } while (choice == 'y' || choice == 'Y');

    printf("\n-------- BILL --------\n");
    printf("Total Amount: %.2f\n", total);
    printf("----------------------\n");
    printf("Thank you for visiting!\n\n");
}
