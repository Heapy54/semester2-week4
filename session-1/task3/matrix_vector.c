
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    //allocation of heap memory
    a = calloc(n, sizeof(float*));
    for (int i = 0; i<n; i++){
        a[i] = calloc(n, sizeof(float));
    }
    b = calloc(n , sizeof(float));
    c = calloc(n , sizeof(float));


    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */

    for(int k = 0; k<n; k++){
        b[k] = 1.0f;
        for(int i = 0; i<n; i++){
            a[k][i] = 1.0f;
        }
    }
    
    for (int k =0; k<n; k++){
        for (int i = 0; i<n; i++){
            c[k] +=a[k][i]*b[i];
        }
    }

    for(int k = 0; k<n; k++){
        printf("|%f|\n",c[k]);
    }

    free(a);
    free(b);
    free(c);

    return 0;
 }
