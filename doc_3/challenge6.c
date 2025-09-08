#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    char word[30];

    printf("Enter a word: ");
    scanf(" %[^\n]s",word);
    
    int len = strlen(word);

    for(int i=0;i<len;i++){
    char capital = toupper(word[i]);
   
    if(capital){
        switch(capital){

        case 'A' : printf("4");
                   break;
        case 'B' : printf("8");
                   break;
        case 'E' : printf("3");
                   break;
        case 'I' : printf("1");
                   break;
        case 'O' : printf("0");
                   break;
        case 'S' : printf("5");
                   break;
        default :  printf("%c",capital);
                   break;  
            
        }
    }
    

  }

    printf("!!!!!!!!!!!!!");




    return 0;
}