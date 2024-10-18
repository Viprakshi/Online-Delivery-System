#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int choice_1, choice_2, registration_number = 902839, bill_without_tax;
    float tax, handling_charges;
    char name[50];
    int price_1 = 299, price_2 = 399, price_3 = 499;
    int quantity_1, quantity_2, quantity_3;
    
    do {
        printf("1. Registration\n2. Available restaurants\n3. Payment options\n4. Track your order\n5. Exit Program\n");
        scanf("%d", &choice_1);
        
        switch (choice_1) {
            case 1: {
                printf("Enter your name:\n");
                scanf("%d", &choice_1);
                getchar();

                printf("Hi %sYour Registration number is %d\nYou can now browse through the menus of different restaurants and enjoy life!!\n", name, registration_number);
                break;
            }
            
            case 2: {
                printf("Choose from a restaurant below:\n");
                printf("1. Pizza Hut\n2. Paradise\n3. McDonald's\n");
                scanf("%d", &choice_2);
                
                switch (choice_2) {
                    case 1: {
                        printf("----------------------------------------\n       PIZZA HUT MENU\n----------------------------------------\n");
                        printf("Enter the quantity for each item (enter 0 if you don't want to order any of it)\n1) Margherita     Rs.%d\n2) Veggie Supreme     Rs.%d\n3) Chicken Sausage     Rs.%d\n", price_1, price_2, price_3);
                        scanf("%d %d %d", &quantity_1, &quantity_2, &quantity_3);
                        
                        printf("Thank you for ordering.. here is your bill\n");
                        printf("------------------------------------\n            BILL\n------------------------------------\nName: %s\nRegistration number: %d\nITEM               QUANTITY        PRICE\n1) Margherita         %d             %d\n2) Veggie Supreme     %d             %d\n3) Chicken Sausage    %d             %d\n", name, registration_number, quantity_1, (quantity_1 * price_1), quantity_2, (quantity_2 * price_2), quantity_3, (quantity_3 * price_3));
                        
                        bill_without_tax = (quantity_1 * price_1) + (quantity_2 * price_2) + (quantity_3 * price_3);
                        tax = 0.2 * bill_without_tax;
                        printf("GST Charges: Rs %f\n", tax);
                        handling_charges = 0.05 * bill_without_tax;
                        printf("Handling Charges: Rs %f\n", handling_charges);
                        printf("Your total bill is Rs %f \n------------------------------------\n", bill_without_tax + handling_charges + tax);
                        
                        break;
                    }
                }
                break;
            }
            
            case 3: {
                printf("----------------------------------------------\nYour total bill is Rs%d \n", (quantity_1 * price_1) + (quantity_2 * price_2) + (quantity_3 * price_3));
                printf("You can use the following to carry out your payment:\n1) Paytm\n2) Google Pay\n3) Cash on Delivery\n4) Card Payment\n----------------------------------------------\n");
                break;
            }
            
            case 4: {
                printf("Your order is being prepared and will be delivered to you soon.\nContact your delivery partner for more information.\n");
                break;
            }
            
            case 5: {
                printf("Thank you! Visit again!!");
                return 0;
            }
            
            default: {
                printf("\nYour choice is invalid\n");
            }
        }
    } while (choice_1 != 5);
    
    return 0;
}
