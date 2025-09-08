#include <stdio.h>

int main(){
    int n;

    printf("Enter deux numbre: ");
    scanf("%d %d",&n);

    int temp = n / 10;
    n = n % 10;
    printf("%d%d",n,temp);


    return 0;
}