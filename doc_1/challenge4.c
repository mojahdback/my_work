#include <stdio.h>

int main(){
     
    float montane;
    float taxt;
    printf("Entrez un montant : ");
    scanf("%f",&montane);
    montane += montane * 0.05;
    
    printf("Avec taxe ajoutee : %.2f$",montane);
    
    


    return 0;
}