#include <stdio.h>

int main(){
    
    
   float pret,inter,intert,paiement;
   printf("Entrez le montant du pret :");
   scanf("%f",&pret);

   printf("Entrez le taux d'interet :");
   scanf("%f",&inter);

   printf("Entrez le paiement mensuel :");
   scanf("%f",&paiement);

   intert = ( inter / 100) /12;
   pret = pret + (pret * intert);
   pret = pret - paiement;
   printf("Solde restant apres le premier paiement : %.2f\n",pret);
   intert =( inter / 100) /12;
   pret = pret + (pret * intert);
   pret = pret - paiement;
   printf("Solde restant apres le premier paiement : %.2f\n",pret);
   intert = ( inter / 100) /12;
   pret = pret + (pret * intert);
   pret = pret - paiement;
   printf("Solde restant apres le premier paiement : %.2f\n",pret);

  

    return 0;
}