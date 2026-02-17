
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int n = 5;
    float *a, *b;//, *d;  // stack-based pointers
    float d = 0.0f;

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float) );
    b = calloc( n, sizeof(float) );
    //d = calloc( n, sizeof(float) );

    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */

    //initilise vectors
   for(int k = 0; k<n; k++){
      a[k] = 1.0f;
      b[k] = k + 2.0f;
   }
   
   for(int k = 0; k<n; k++){
      d += a[k]*b[k];
   }

   printf("Dot product = %.2f\n", d);

    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);
    //free(d);

    return 0;
 }