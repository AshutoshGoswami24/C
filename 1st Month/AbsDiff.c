/* Absolute Difference Calculator
by https://github.com/AshutoshGoswami24/C */

#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter num1 num2 :");
    scanf("%d %d",&a,&b);
    c =a>b?a-b:b-a;
    printf("this is sum of %d - %d = %d",a,b,c);
    printf("/* Absolute Difference Calculator \n by https://github.com/AshutoshGoswami24/C */");
    return 0;
}
