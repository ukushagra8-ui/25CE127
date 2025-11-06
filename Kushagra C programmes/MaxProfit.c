#include <stdio.h>
#include <limits.h> // Required for INT_MAX

// Function to calculate the maximum profit
int maxProfit(int prices[], int size) {
    // If we can't make a transaction, profit is 0
    if (size <= 1) {
        return 0;
    }

    int min_price = INT_MAX; // Start with the highest possible integer value
    int max_profit = 0;

    // Iterate through the prices to find the best buy and sell days
    for (int i = 0; i < size; i++) {
        // If we find a new lowest price, that's our new potential buy day
        if (prices[i] < min_price) {
            min_price = prices[i];
        }
        // Otherwise, check if selling today would give us a better profit
        else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }

    return max_profit;
}

int main() {
    // --- Test Case 1 ---
    int prices1[] = {20, 25, 15, 30, 10, 50};
    int size1 = sizeof(prices1) / sizeof(prices1[0]);
    int profit1 = maxProfit(prices1, size1);
    printf("Test Case 1 Input: [20, 25, 15, 30, 10, 50]\n");
    printf("Maximum Profit: %d\n\n", profit1); // Expected: 40

    // --- Test Case 2 ---
    int prices2[] = {10, 8, 6, 4, 2};
    int size2 = sizeof(prices2) / sizeof(prices2[0]);
    int profit2 = maxProfit(prices2, size2);
    printf("Test Case 2 Input: [10, 8, 6, 4, 2]\n");
    printf("Maximum Profit: %d\n\n", profit2); // Expected: 0

    // --- Test Case 3 ---
    int prices3[] = {100, 180, 260, 310, 40, 535, 695};
    int size3 = sizeof(prices3) / sizeof(prices3[0]);
    int profit3 = maxProfit(prices3, size3);
    printf("Test Case 3 Input: [100, 180, 260, 310, 40, 535, 695]\n");
    printf("Maximum Profit: %d\n\n", profit3); // Expected: 655 (buy at 40, sell at 695)

    // --- Test Case 4 ---
    int prices4[] = {30, 20, 25, 40, 25, 50, 35};
    int size4 = sizeof(prices4) / sizeof(prices4[0]);
    int profit4 = maxProfit(prices4, size4);
    printf("Test Case 4 Input: [30, 20, 25, 40, 25, 50, 35]\n");
    printf("Maximum Profit: %d\n\n", profit4); // Expected: 30 (buy at 20, sell at 50)

    // --- Test Case 5 ---
    int prices5[] = {5, 5, 5, 5, 5};
    int size5 = sizeof(prices5) / sizeof(prices5[0]);
    int profit5 = maxProfit(prices5, size5);
    printf("Test Case 5 Input: [5, 5, 5, 5, 5]\n");
    printf("Maximum Profit: %d\n\n", profit5); // Expected: 0



    printf("\nID:25CE127\nName:Kushagra Vipulkumar Upadhyay\n");
    return 0;
}
