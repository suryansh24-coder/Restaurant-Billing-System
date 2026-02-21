// #include<stdio.h>

// float genBill(float x);
// float TotalBill(float x);

// int main(){
//    int price=0; // To store the selected item price
//    int course ; // Selection of course 
   
//     printf("---------------------------------\n");
//     printf("Enter the course you want:\n");
//     printf("---------------------------------\n");
//     printf("---------------------------------\n");
//     printf("Enter 1 for  Starters & Snacks \n");
//     printf("---------------------------------\n");
//     printf("Enter 2 for Beverages & Drinks  \n");
//     printf("---------------------------------\n");
//     printf("Enter 3 for  Desserts & Extras \n ");
//     printf("---------------------------------\n");
    
//      scanf("%d",&course);  
//    if(course==1){   // casing if- else for the starter and printing menu
//     printf("Starters & Snacks\n");
  
//     printf("----------------------------\n");
//     printf("01. Veg Spring Rolls     $120\n");
//     printf("02. Paneer Tikka         $160\n");
//     printf("03. Cheese Garlic Bread  $130\n");
//     printf("04. Masala Fries         $110\n");
//     printf("05. Veg Momos            $100\n");
//     printf("06. Chilli Paneer (Dry)  $180\n");
//     printf("07. Veg Burger           $140\n");
//     printf("08. Cheese Corn Balls    $150\n");
//     printf("09. Veg Pizza (Regular)  $200\n");
//     printf("10. Farmhouse Pizza      $220 \n");
//     printf("----------------------------\n");
//     printf("----------------------------\n");
    
//     int selDesert; // using switch case for the menu selection
//     printf("Please select your favourite item :(01-10)\n");
//     scanf("%d",&selDesert);

//      switch (selDesert){

//          case 2: price = 160;
//           printf("Paneer Tikka selected.\n");
//           break;
//          case 3: price = 130;
//           printf("Cheese Garlic Bread selected.\n");
//           break;
//          case 4: price = 110; 
//          printf("Masala Fries selected.\n"); 
//           break;
//          case 5: price = 100;
//           printf("Veg Momos selected.\n"); 
//           break;
//          case 6: price = 180;
//           printf("Chilli Paneer (Dry) selected.\n");  
//           break;
//          case 7: price = 140;
//           printf("Veg Burger selected.\n"); 
//           break;
//          case 8: price = 150; 
//           printf("Cheese Corn Balls selected.\n"); 
//           break;
//          case 9: price = 200; 
//           printf("Veg Pizza (Regular) selected.\n"); 
//           break;
//          case 10: price = 220; 
//           printf("Farmhouse Pizza selected.\n"); 
//           break;
//          default: printf("Invalid choice.\n"); 
//          return 0;
//      }

//   else if(course == 2){  // Else if used for drinks and beverages : 

//      printf("Beverages & Drinks \n");
//      printf("--------------------------\n");
//      printf("11. Cold Coffee        $120\n");
//      printf("12. Masala Chai        $40  \n"); 
//      printf("13.Fresh Lime Soda     $70\n");
//      printf("14.Mango Shake         $130\n");
//      printf("15.Oreo Shake          $150\n");
//      printf("16.Virgin Mojito       $150\n");
//      printf("--------------------------\n");
//      printf("--------------------------\n");

//      int selDrink;
//      printf("Enter your favourable Drinks & beverages : (11-16)\n");
//      scanf("%d",&selDrink);

//      switch (selDrink){
//          case 11: price = 120;
//           printf("Cold Coffee selected.\n");
//            break;
//          case 12: price = 40;  
//           printf("Masala Chai selected.\n"); 
//           break;
//          case 13: price = 70;   
//           printf("Fresh Lime Soda selected.\n");
//            break;
//          case 14: price = 130;  
//           printf("Mango Shake selected.\n");
//            break;
//          case 15: price = 150;  
//           printf("Oreo Shake selected.\n"); 
//           break;
//          case 16: price = 150; 
//           printf("Virgin Mojito selected.\n"); 
//           break;
//          default: printf("Invalid choice.\n");
//           return 0;
//       }
//    }

//  else if(course==3){ // Desert and extras.

//        printf("--------------------------\n");
//        printf("Deserts and Extras.\n");
//        printf("--------------------------\n");
//        printf("17.Choco Lava Cake           $120\n");
//        printf("18.Brownie with Ice Cream    $150\n");
//        printf("19.Gulab Jamun (2 pcs)       $70\n");
//        printf("20.Ice Cream Scoop           $60\n");
//        printf("--------------------------\n");
      
//       int selExt ;
//        printf("Select your favourable food item : (17-20)\n");
//        scanf("%d",&selExt);


//       switch(selExt){
//          case 17: price = 120;
//            printf("Choco Lava Cake selected.\n");
//             break;
//          case 18: price = 150; 
//            printf("Brownie with Ice Cream selected.\n");
//             break;
//          case 19: price = 70;
//            printf("Gulab Jamun selected.\n");
//             break;
//          case 20: price = 60; 
//            printf("Ice Cream Scoop selected.\n"); 
//             break;
//          default: printf("Invalid choice.\n"); 
//             return 0;
//       }
//  }
//  else {
//       printf("Invalid course selection.\n");
//       return 0;
//    }
//    }


//    // Generate and display bill
//    float bill = genBill(price);
//    printf("---------------------------------\n");
//    printf("Your total bill amount: $%.2f\n", bill);
//    printf("Thank you for visiting!\n");
//    printf("---------------------------------\n");

//    return 0;
// }

// // Function to calculate total with tax (5%)
// float genBill(float x){
//     float gst = 0.05 * x;
//     float total = x + gst;
//     return total;
// }

// float TotalBill(float x){
//     return x; // (optional placeholder if you extend features later)
// }
// -------------------------------------------------------------------------------------------------------------------------------------

    
#include <stdio.h>

// Function declarations
float genBill(float x);
float TotalBill(float x);

int main() {
    int price = 0;  // To store the selected item price
    int course;     // Selection of course

    printf("---------------------------------\n");
    printf("Enter the course you want:\n");
    printf("---------------------------------\n");
    printf("Enter 1 for Starters & Snacks\n");
    printf("Enter 2 for Beverages & Drinks\n");
    printf("Enter 3 for Desserts & Extras\n");
    printf("---------------------------------\n");

    scanf("%d", &course);

    if (course == 1) {   // For Starters & Snacks
        printf("\nStarters & Snacks Menu\n");
        printf("----------------------------\n");
        printf("01. Veg Spring Rolls     $120\n");
        printf("02. Paneer Tikka         $160\n");
        printf("03. Cheese Garlic Bread  $130\n");
        printf("04. Masala Fries         $110\n");
        printf("05. Veg Momos            $100\n");
        printf("06. Chilli Paneer (Dry)  $180\n");
        printf("07. Veg Burger           $140\n");
        printf("08. Cheese Corn Balls    $150\n");
        printf("09. Veg Pizza (Regular)  $200\n");
        printf("10. Farmhouse Pizza      $220\n");
        printf("----------------------------\n");

        int selItem;
        printf("Please select your favourite item (01-10): ");
        scanf("%d", &selItem);

        switch (selItem) {
            case 1: price = 120; printf("Veg Spring Rolls selected.\n"); break;
            case 2: price = 160; printf("Paneer Tikka selected.\n"); break;
            case 3: price = 130; printf("Cheese Garlic Bread selected.\n"); break;
            case 4: price = 110; printf("Masala Fries selected.\n"); break;
            case 5: price = 100; printf("Veg Momos selected.\n"); break;
            case 6: price = 180; printf("Chilli Paneer (Dry) selected.\n"); break;
            case 7: price = 140; printf("Veg Burger selected.\n"); break;
            case 8: price = 150; printf("Cheese Corn Balls selected.\n"); break;
            case 9: price = 200; printf("Veg Pizza (Regular) selected.\n"); break;
            case 10: price = 220; printf("Farmhouse Pizza selected.\n"); break;
            default: printf("Invalid choice.\n"); return 0;
        }
    }

    else if (course == 2) {   // For Beverages & Drinks
        printf("\nBeverages & Drinks Menu\n");
        printf("--------------------------\n");
        printf("11. Cold Coffee        $120\n");
        printf("12. Masala Chai        $40\n");
        printf("13. Fresh Lime Soda    $70\n");
        printf("14. Mango Shake        $130\n");
        printf("15. Oreo Shake         $150\n");
        printf("16. Virgin Mojito      $150\n");
        printf("--------------------------\n");

        int selDrink;
        printf("Enter your favourite Drink (11-16): ");
        scanf("%d", &selDrink);

        switch (selDrink) {
            case 11: price = 120; printf("Cold Coffee selected.\n"); break;
            case 12: price = 40;  printf("Masala Chai selected.\n"); break;
            case 13: price = 70;  printf("Fresh Lime Soda selected.\n"); break;
            case 14: price = 130; printf("Mango Shake selected.\n"); break;
            case 15: price = 150; printf("Oreo Shake selected.\n"); break;
            case 16: price = 150; printf("Virgin Mojito selected.\n"); break;
            default: printf("Invalid choice.\n"); return 0;
        }
    }

    else if (course == 3) {   // For Desserts & Extras
        printf("\nDesserts & Extras Menu\n");
        printf("--------------------------\n");
        printf("17. Choco Lava Cake           $120\n");
        printf("18. Brownie with Ice Cream    $150\n");
        printf("19. Gulab Jamun (2 pcs)       $70\n");
        printf("20. Ice Cream Scoop           $60\n");
        printf("--------------------------\n");

        int selDessert;
        printf("Select your favourite dessert (17-20): ");
        scanf("%d", &selDessert);

        switch (selDessert) {
            case 17: price = 120; printf("Choco Lava Cake selected.\n"); break;
            case 18: price = 150; printf("Brownie with Ice Cream selected.\n"); break;
            case 19: price = 70;  printf("Gulab Jamun selected.\n"); break;
            case 20: price = 60;  printf("Ice Cream Scoop selected.\n"); break;
            default: printf("Invalid choice.\n"); return 0;
        }
    }

    else {
        printf("Invalid course selection.\n");
        return 0;
    }

    // Generate and display bill
    float bill = genBill(price);
    printf("---------------------------------\n");
    printf("Your total bill amount (with 5%% GST): $%.2f\n", bill);
    printf("Thank you for visiting!\n");
    printf("---------------------------------\n");

    return 0;
}

// Function to calculate total with tax (5%)
float genBill(float x) {
    float gst = 0.05 * x;
    float total = x + gst;
    return total;
}

// Placeholder for future features
float TotalBill(float x) {
    return x;
}
// This system is valid for single selected item and not tghe multiple items:


     

   


   