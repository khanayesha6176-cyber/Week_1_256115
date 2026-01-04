#include <stdio.h>

int main() {
    int id[5], qty[5], i, search;
    char name[5][20];
    float price[5], total[5], bill = 0;

    // Input product details
    for(i = 0; i < 5; i++) {
        printf("\nEnter Product ID: ");
        scanf("%d", &id[i]);

        printf("Enter Product Name: ");
        scanf("%s", name[i]);

        printf("Enter Quantity: ");
        scanf("%d", &qty[i]);

        printf("Enter Price: ");
        scanf("%f", &price[i]);

        total[i] = qty[i] * price[i];
        bill = bill + total[i];
    }

    // Display product details
    printf("\n\nID\tName\tQty\tPrice\tTotal\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t%d\t%.2f\t%.2f\n",
               id[i], name[i], qty[i], price[i], total[i]);
    }

    // Display total bill
    printf("\nTotal Bill = %.2f\n", bill);

    // Search product by ID
    printf("\nEnter Product ID to search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++) {
        if(id[i] == search) {
            printf("\nProduct Found:");
            printf("\nID: %d", id[i]);
            printf("\nName: %s", name[i]);
            printf("\nQuantity: %d", qty[i]);
            printf("\nPrice: %.2f", price[i]);
            printf("\nTotal: %.2f", total[i]);
            break;
        }
    }

    return 0;
}