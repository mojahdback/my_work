
#include <stdio.h>

int main(){
    
    int n;
     int temp;
    printf("Enter N : ");
    scanf("%d",&n);
    int i=1;
   do{
       
        temp = i * i;
        if(temp % 2 == 0){

            printf("%d\n",temp);
        }
        i++;
        
    }while(temp <=  n);
    
    
    
    
    
    
    return 0;
}