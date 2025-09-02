#include <stdio.h>

int main(){

   int x;

   printf("Enter X: ");
   scanf("%d",&x);
   // ((((3x+2)x–5)x–1)x+7)x–6 
   int sum = ((((3*x + 2)* x-5)*x - 1)*x+7)* x - 6;

   printf("the result: %d",sum);




    return 0;
}