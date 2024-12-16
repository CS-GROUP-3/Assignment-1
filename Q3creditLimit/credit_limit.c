#include <stdio.h>

int main() {
    int n, i;
    float creditLimit, price, totalValue;
    int quantity;
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nCustomer %d:\n", i);
        printf("Enter the credit limit: ");
        scanf("%f", &creditLimit);

        printf("Enter the price of the item: ");
        scanf("%f", &price);

        do {
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            totalValue = price * quantity;
            if (totalValue > creditLimit) {
                printf("Sorry, you cannot purchase goods worth %.2f on credit. Re-enter quantity.\n", totalValue);
            } else {
                printf("Thank you for purchasing from us!\n");
                printf("Total value of the purchase: %.2f\n", totalValue);
            }

        } while (totalValue > creditLimit);
    }

    return 0;
}