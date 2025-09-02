#include <stdio.h>

int main(){

    int montant;
    int rest20;
    int rest10;
    int rest5;
    int rest1;
    printf("Entrez un montant en dollars : ");
    scanf("%d",&montant);
  
    rest20 = montant/ 20;
    montant = montant % 20 ;
    printf("Billets de 20$ : %d\n",rest20);
    rest10 = montant / 10;
    montant = montant % 10;
    printf("Billets de 10$ : %d\n",rest10);
     rest5 = montant/ 5;
    montant = montant % 5 ;
    printf("Billets de 20$ : %d\n",rest5);
    rest1 = montant / 1;
    printf("Billets de 10$ : %d\n",rest1);


    return 0;
}