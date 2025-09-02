#include <stdio.h>

int main(){
    float v; 
    const float Pi = 3.14; 
    float r ;
    printf("entrer le rayon de la sphere: ");
    scanf("%f",&r);
    float r3 = r * r *r;
    float sum = Pi * r3;
    v = 4.0f / 3.0f * sum;
    
    printf("%.2f m2",v);


  


    return 0;
}