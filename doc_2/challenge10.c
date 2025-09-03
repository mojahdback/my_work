#include <stdio.h>


int main()
{
    /*Écrivez un programme qui affiche les valeurs de sizeof(int), sizeof(short),
sizeof(long), sizeof(float), sizeof(double) et sizeof(long double).
   */
      printf("%ld\n",sizeof(int));
      printf("%d\n",sizeof(short));
      printf("%ld\n",sizeof(long));
      printf("%ld\n",sizeof(float));
      printf("%ld\n",sizeof(double));
      printf("%lld\n",sizeof(long double));

   
    return 0;
}