#include <stdio.h>

int main(){

    int n,m;
    int b,l;
    int gcd;
    printf("Entrez une fraction :");
    scanf("%d/%d",&n,&m);
    b = n;
    l = m;

    do{

        if(n== 0)
           printf("%d",m);
        else{
            int r = m % n;
             m = n; 
             n = r;
            
        } 

    }while(n != 0); 
    
    printf("Sous sa forme la plus simple : %d/%d",b/m,l/m);
   
    



    return 0;
}