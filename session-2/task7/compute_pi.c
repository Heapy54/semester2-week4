/*
 * Use the series approxiation to Pi 
 *  pi_n = 4 x ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... )
 * to approximate Pi
 * and examine how accurate it is as 
 * you increase the number of terms, n.
 * Enter the number of terms, n,  as a command line argument.
 * ie. measure error = abs( Pi-pi_n )
 * Hint: math library function fabs(x) gives you the absolute value as a double. 
 * Print out the number of terms, the computed value pi_n and the error
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main( int argc, char **argv ) {
    double Pi = 3.1415926535897932;
    
    /*
    Your code
    */

    //Check
    if(argc<2){
        printf("Usage %s n\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if(n<=0){
        printf("N must be positive");
        return 1;
    }

    //formula
    double sum = 0.0 ;
    for(int k = 0; k< n; k++){
        double term = 1.0 / (2*k + 1);
        if (k%2 == 0){
            sum+=term;
        }
        else{
            sum-=term;
        }
    }

    double pi_n = 4*sum;
    double error = Pi-pi_n;

    printf("n = %d\n", n);
    printf("pi_n = %.12f\n", pi_n);
    printf("error = %.15f\n", error);



    return 0;
}
 