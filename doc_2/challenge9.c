#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    char word[50];
    
    int Valeur_Scrabble = 0;
    
    printf("Entrez un mot :");
    scanf("%s",word);
    int len = strlen(word);
  

    for(int i=0;i<len;i++){
        
        if(toupper(word[i]) == 'A' || toupper(word[i])== 'E' || toupper(word[i]) == 'I' ||toupper(word[i]) == 'N' || toupper(word[i])== 'O' || toupper(word[i])== 'R' || 
            toupper(word[i]) == 'S' ||toupper(word[i]) == 'T' ||toupper(word[i]) == 'U' ||toupper(word[i]) == 'L' )
                Valeur_Scrabble += 1;
           
        else if(toupper(word[i])== 'D' || toupper(word[i])== 'G' )
               Valeur_Scrabble += 2 ;
        
         
        else if(toupper(word[i])== 'B' || toupper(word[i])== 'C' || toupper(word[i]) == 'P' || toupper(word[i])== 'M' )
                 Valeur_Scrabble += 3;

        else if(toupper(word[i]) == 'F' ||toupper(word[i])== 'H' || toupper(word[i]) == 'V' || toupper(word[i])== 'W' || toupper(word[i])== 'Y' )
            Valeur_Scrabble += 4;
        
            
        else if(toupper(word[i]) == 'K')
            Valeur_Scrabble += 5;
        
          
        else if (toupper(word[i]) == 'J' || toupper(word[i])== 'X')
            Valeur_Scrabble += 8;
        
        else if (toupper(word[i]) == 'Z' || toupper(word[i]) == 'Q')
            Valeur_Scrabble += 10;

        else{
             printf("enter character pleaae!\n");
             break;
        }
          

        
      
    }
    
     printf("Valeur Scrabble : %d\n",Valeur_Scrabble);




    return 0 ;
}