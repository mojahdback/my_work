#include <stdio.h>
/*Entrez la première date (mm/jj/aa) : 3/6/08
  Entrez la deuxième date (mm/jj/aa) : 5/17/07
  5/17/07 est plus tôt que 3/6/08*/
int main(){

    int d1,m1,a1,d2,m2,a2;

    printf("Entrez la premiere date (mm/jj/aa) :");
    scanf("%d/%d/%d",&d1,&m1,&a1);

    printf("Entrez la deuxieme date (mm/jj/aa) :");
    scanf("%d/%d/%d",&d2,&m2,&a2);

    if(a1 < a2)
        printf("%d/%d/%d est plus tot que %d/%d/%d \n",d1,m1,a1,d2,m2,a2);
    else if(a2 < a1)
         printf("%d/%d/%d est plus tot que %d/%d/%d \n",d2,m2,a2,d1,m1,a1);
    else{
        if(a1 == a2){
            if(m1 < m2)
               printf("%d/%d/%d est plus tot que %d/%d/%d \n",d1,m1,a1,d2,m2,a2);
            else if(m2 < m1)
               printf("%d/%d/%d est plus tot que %d/%d/%d \n",d2,m2,a2,d1,m1,a1);
            else{
                if(m1 == m2){
                    if(d1 < d2)
                       printf("%d/%d/%d est plus tot que %d/%d/%d \n",d1,m1,a1,d2,m2,a2);

                    else 
                        printf("%d/%d/%d est plus tot que %d/%d/%d \n",d2,m2,a2,d1,m1,a1);
                       
                       
                }
            }
            
        }
    }
       
   
    
    





    return 0;
}