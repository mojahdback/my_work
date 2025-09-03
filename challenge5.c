#include <stdio.h>

int main(){

    int n,m;
    printf("Entrez deux entiers :");
    scanf("%d %d",&n,&m);

    do{

        if(n == 0)
           printf("%d",m);
        else{
            int r = m % n;
             m = n; 
             n = r;
            
        } 

    }while(n != 0); 
    printf("Le plus grand commun diviseur est : %d",m);
   
    



    return 0;
}