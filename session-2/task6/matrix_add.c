
#include <stdio.h>
#include <stdlib.h>

// Modify this code so that 'n' is a command-line argument
// 
// You will need to dynamically allocate the matrices: mat1, mat2, sum
// You will need to modify the code so that matrix dimension is variable n
// remember to free dynamicaly allocated memory 

int main( int argc, char **argv ) {

    //Check
    if(argc<2){
        printf("Usage %s n\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if (n<=0){
        printf("n must be positive\n");
        return 1;
    }

    int *mat1 = calloc(n*n,sizeof(int));
    int *mat2 = calloc(n*n,sizeof(int));
    int *sum = calloc(n*n,sizeof(int));

    // set initial data
    for( int j=0; j<5; ++ j) {
        for( int k=0; k<5; ++k ) {
            mat1[j*n + k] = -2;
            mat2[j*n + k] = 3; 
        }
    }

    // compute sum
    for( int j=0; j<5; ++ j) {
        for( int k=0; k<5; ++k ) {
            sum[j*n + k] = mat1[j*n + k] + mat2[j*n + k]; 
        }
    }

    // print out the result
    for( int j=0; j<5; ++ j) {
        for( int k=0; k<5; ++k ) {
            printf("%d ",sum[j*n + k]);
        }
        printf("\n");
    }

    return 0;
}