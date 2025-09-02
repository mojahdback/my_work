#include <stdio.h>

int main(){

   int x;

   printf("Enter X: ");
   scanf("%d",&x);
   // 3x5+2x4–5x3–x2+7x–6 
   int sum = (3*x*x*x*x*x) + (5*x*x*x*x) - (x*x) + (7*x) - 6;

   printf("la valeur du polynome : %d",sum);




    return 0;
}