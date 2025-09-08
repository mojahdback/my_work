#include <stdio.h>

int main(){

    int n,numbre;
    int rest;
    int T[20];
    int M[] = {0,1,2,3,4,5,6,7,8,9};
    int count;
     int j, i = 0;
    while(numbre > 0){
    printf("\nEnter a number: ");
    scanf("%d",&n);
    
       numbre = n;
       if(numbre <=0 )
          return 0;
     
       
    while(n > 0){
       
        rest = n % 10;
        T[i] = rest;
        n /= 10;
        i++;

    }
    int size =i;
    
    printf("Chiffre : \t");
    for(i=0;i<10;i++){
        printf("%d ",M[i]);  
    }
    printf("\n");
    printf("\t\t");

    for(i=0;i<10;i++){
         count =0;
        for(int j= 0;j<size;j++){
             if(T[j] == M[i]){
                count++;
             }
            
        } 
        if(count != 0)
         {
           printf("%d ",count);
         }
        if(count == 0){
            printf("0 ");
        }
        
   
    }
  
    }


    return 0 ;
}