#include <stdio.h>
int main() {
    int choice;
    int total_amount = 0;
    
    printf("Here is the menu:\n");
    printf("1)Burger -> 150\n");
    printf("2)Pizza -> 200\n");
    printf("3)Pasta -> 120\n");
    printf("4)Sandwich -> 100\n");
    printf("5)French Fries -> 80\n");
    
    while(1) {
        printf("select from (1-5) for order or '0' to finish order: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                total_amount += 150;
                printf("added burger in your order. Current total: ₹%d\n", total_amount);
                break;
            case 2:
                total_amount += 200;
                printf("added Pizza in your order. Current total: ₹%d\n", total_amount);
                break;
            case 3:
                total_amount += 120;
                printf("added Pasta in your order. Current total: ₹%d\n", total_amount);
                break;
            case 4:
                total_amount += 100;
                printf("added Sandwich in your order. Current total: ₹%d\n", total_amount);
                break;
            case 5:
                total_amount += 80;
                printf("added French Fries in your order. Current total: ₹%d\n", total_amount);
                break;
            case 0:
                printf("Your total amount is ₹%d\n", total_amount);
                return 0;
            default:
                printf("Enter correct order,try again.\n");
        }
    }

    return 0;
}
