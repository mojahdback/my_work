#include <stdio.h>

int main(){

    int n;
    int rest;
    int T[20],repit[20];
    int count;

    printf("Enter a number: ");
    scanf("%d",&n);
    int j, i = 0;
    while(n > 0){

        rest = n % 10;
        T[i] = rest;
        n /= 10;
        i++;

    }
    int size =i;
    for(i=0;i<size-1;i++){ 
         repit[i] = 1;
    }
    for(i=0;i<size-1;i++){
         count =1;
        if(repit[i] != 0){
           for(j=i+1;j<size;j++){
            if(T[i] == T[j]){
                repit[j] = 0;
                count++;
            }
           }

        }
       
        repit[i] = count;

    }

    
     
    
    printf("Chiffre(s) repee(s) : ");
    for(i=0;i<size;i++){
        if(repit[i] > 1 )
           printf("%d ",T[i]);    
    }
    
   




    return 0 ;
}