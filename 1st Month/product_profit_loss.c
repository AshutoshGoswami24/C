/*
 * File: product_profit_loss.c
 * 
 * Description:
 * This program allows the user to input a product name, its price, 
 * and the selling amount. It then evaluates whether the sale resulted 
 * in a profit, break-even, or loss. The program uses conditional statements 
 * to compare the selling amount with the price and provides feedback 
 * accordingly. This demonstrates basic input handling, conditionals, 
 * and output in C.
 * 
 * Author: Ashutosh Goswami
 * GitHub: https://github.com/AshutoshGoswami24/
 */

#include <stdio.h>

int main()
{
    char PRD[30];
    long int PR, SELL;
    
    printf("Product Name 😁\n");
    fgets(PRD, sizeof(PRD), stdin); 
    
    printf("Enter price & sell amount: \n");
    scanf("%ld %ld", &PR, &SELL);  

    if (SELL > PR)
        printf("Profit Hua Hai Bhi\n");
    else if (SELL == PR)  
        printf("Ah Bhi Same price Me Sell Kar Diya\n");
    else
        printf("Ah Bhi Loss Ho Gya\n");
        
    return 0;    
}

