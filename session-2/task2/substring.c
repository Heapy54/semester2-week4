/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

#include <stdio.h>
#include <string.h>

int main(void){

    char string[] = "The quick brown fox jumped over the lazy dog";
    char substring[]= "ump";

    char *result = strstr(string,substring);

    if(result != NULL){
        printf("String pointer is %p\n", (void *)result);


        printf("First character is %c\n",*result);

        printf("String position is %s\n",result);


    }
    else{
        printf("Not in the string\n");
    }


    return 0;
}
