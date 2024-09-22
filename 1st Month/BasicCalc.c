/* Basic Arithmetic Calculator
   by https://github.com/AshutoshGoswami24/C
   This program performs basic arithmetic operations 
   such as addition, subtraction, multiplication, 
   division, and modulus on two integer inputs.
*/



#include<stdio.h>
int main(){
  
  int a,b,diff,q,r;
  long sum, p;
  puts("input two int values");
  scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    p=a*b;
    q=a/b;
    r=a%b;
  printf("\n A=%d B=%d",a,b);
  printf("\n sum=%ld\n diff=%d\n prod=%ld\n q=%d\n R=%d",sum,diff,p,q,r);
  puts("press Enter to continue");
  getchar();
return 0;
}


