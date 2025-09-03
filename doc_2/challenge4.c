#include <stdio.h>

int main(){

    int n;
    int note;
    printf("Entrez une note numérique :");
    scanf("%d",&n);

    note = n/10;

    switch(note){

        case 10 : printf("Note litterale : A\n");
                       break;
        case 9 : printf("Note litterale : A\n");
                       break;
        case 8 : printf("Note litterale : B\n");
                       break;
        case 7 : printf("Note litterale : C\n");
                       break;
        case 6 : printf("Note litterale : D\n");
                       break;
        case 5 : printf("Note litterale : F\n");
                 break;
        case 4 : printf("Note litterale : F\n");
                       break;
        case 3 : printf("Note litterale : F\n");
                       break;
        case 2 : printf("Note litterale : F\n");
                       break;
        case 1 : printf("Note litterale : F\n");
                       break;
        
                                
        default : if(note <= 0 || note > 100 )
                      printf("Note invalid!\n");
                  break;
        

    }







    return 0;
}