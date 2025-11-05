#include <stdio.h>

int main() {
    int items;
    printf("Enter number of items: ");
    if (scanf("%d", &items) != 1 || items < 0) {
        printf("Error: Invalid number of items.\n");
        return 1;
    }

    if (items == 0) {
        printf("Error: \"No items to sort.\"\n");
        return 0;
    }

    float price[items];
    float *ptr;

   
    for (ptr = price; ptr < &price[items]; ptr++) {
        printf("Enter price of item %d: ",ptr - price + 1);
        if (scanf("%f", ptr) != 1) {
            printf("Error: \"Invalid input for price. Please enter numeric values only.\"\n");
            return 1;
        }
    }

    
    for (ptr = price; ptr < &price[items - 1]; ptr++) {
        for (float *j = ptr + 1; j < &price[items]; j++) {
            if (*ptr > *j) {
                float temp = *ptr;
                *ptr = *j;
                *j = temp;
            }
        }
    }

    
    printf("Sorted Prices: ");
    for (ptr = price; ptr < &price[items]; ptr++) {
        printf("%.2f", *ptr);
        if (ptr < &price[items - 1]) printf(", ");
    }
    printf("\n");

    return 0;
}
