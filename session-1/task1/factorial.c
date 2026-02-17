
/*
 * Factorial
 */

#include <stdio.h>

int main( void ) {
   int f[20];

   /*
   Code to compute the factorial of each array index
   Print your final answer
    */
   f[0] = 1;
   for (int k = 1; k < 20; k++){
      f[k] = k*f[k-1];
   }

   for (int i = 1; i<20; i++){
      printf("%d! = %d\n",i,f[i]);
   }
   return 0;
}
