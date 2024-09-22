/*
 * File: print_numbers.c
 * 
 * Description:
 * This program prints the numbers from 1 to 300, each followed by a comma.
 * It utilizes a simple for loop to iterate through the range and outputs 
 * each number using the printf function. This serves as an example of 
 * basic control structures and output in C.
 * 
 * Author: Ashutosh Goswami
 * GitHub: https://github.com/AshutoshGoswami24/
 */


#include<stdio.h>

int main()
{
    int n;
    for(n=1;n<=300;n++){
    printf("%d, ",n);
    }
    return 0;
}
