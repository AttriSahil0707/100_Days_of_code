/*
Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price.

*/
#include <stdio.h>

int main() {
    // Declare variables for cost price and selling price.
    // Using float to handle decimal values.
    float costPrice, sellingPrice;

    // Prompt the user for input.
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        // Calculate the profit amount and the profit percentage.
        float profit = sellingPrice - costPrice;
        float profitPercentage = (profit / costPrice) * 100;
        // Print the result, formatted to show no decimal places for the percentage.
        printf("Profit %.0f%%\n", profitPercentage);
    }
    else if (costPrice > sellingPrice) {
        // Calculate the loss amount and the loss percentage.
        float loss = costPrice - sellingPrice;
        float lossPercentage = (loss / costPrice) * 100;
        printf("Loss %.0f%%\n", lossPercentage);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
