#ifndef MENU_H
#define MENU_H

#define MAX_ITEMS 50

// Structure to store menu items
struct MenuItem {
    int id;
    char name[50];
    float price;
};

// Function prototypes
void addItem(struct MenuItem menu[], int *count);
void displayMenu(struct MenuItem menu[], int count);
void takeOrder(struct MenuItem menu[], int count);

#endif
