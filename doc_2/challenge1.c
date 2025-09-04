#include <stdio.h>

int main(){

    int isbn;
    int gs1,Ig,cl,nd,chif;
    printf("Entrez l'ISBN :");
    scanf("%d-%d-%d-%d-%d",&gs1,&Ig,&cl,&nd,&chif);
    printf("Prefixe GS1 : %d\n",gs1);
    printf("Identifiant de groupe : %d\n",Ig);
    printf("Code de l'editeur : %d\n",cl);
    printf("Numero d'article : %d\n",nd);
    printf("Chiffre de contrele : %d\n",chif);

   
    return 0;
}