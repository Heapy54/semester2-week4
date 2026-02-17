
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];

    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */

   //Define the matrix

   for (int i=0;i<4;i++){
      for(int j=0;j<4;j++){
         a[i][j]=2*i-j;
      };
   };

   //print orginal matrix
   printf("Matrix A: \n");
   for (int i = 0; i<4; i++){
      for (int j=0 ; j<4;j++ ){
         printf("%d ",a[i][j]);
      }
      printf("\n");
   }
   
   //define the transposed matrix
   for (int i=0;i<4;i++){
      for(int j=i+1;j<4;j++){
         int temp = a[i][j];
         a[i][j] = a[j][i];
         a[j][i] = temp;
      };
   };

   //print the transpose
   printf("Matrix A transpose: \n");
   for (int i = 0; i<4; i++){
      for (int j=0 ; j<4;j++ ){
         printf("%d ",a[i][j]);
      }
      printf("\n");
   }
    return 0;
 }
