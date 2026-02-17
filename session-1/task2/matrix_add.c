
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */

   for (int k = 0; k<4; k++){
      for (int i = 0; i<4; i++){
         a[k][i] = 1;
      };
   };

   for (int k = 0; k<4; k++){
      for (int i = 0; i<4; i++){
         b[k][i] = 1;
      };
   };

   for (int k = 0; k<4; k++){
      for (int i = 0; i<4; i++){
         c[k][i] = a[k][i]+b[k][i];
      };
   };

   for (int k = 0; k<4; k++){
      for (int i = 0; i<4; i++){
         printf("|%f|",c[k][i]);
      };
      printf("\n");
   };

    return 0;
 }
