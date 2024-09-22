/*
 * File: even_odd_checker.c
 * 
 * Description:
 * This program prompts the user to enter an integer (n) and determines
 * whether the number is even or odd. It checks the remainder of the 
 * division of n by 2 and prints an appropriate message indicating 
 * the result. This simple application demonstrates basic input and 
 * output operations in C.
 * 
 * Author: Ashutosh Goswami
 * GitHub: https://github.com/AshutoshGoswami24/
 */

#include <stdio.h>

int main()
{
    int n;
    puts("enter n");
    scanf("%d",&n);
    if(n%2==0)
        printf("\n%its even",n);
    else
        printf("%d its odd",n);
    return 0;
}
