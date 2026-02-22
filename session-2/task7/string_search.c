
/* 
 * Write a program that reads in a line of text from the command line
 * 1. concatenates all the command line arguments into one string
 * 2. searches for the first occurrence of a given character
 * eg. use "The quick brown fox" on the command line and locate 'k'
 * Hint: argv is an array so you can use a simple for-loop
 * Hint: string library functions strcat() and strcspn() can be used
 */
#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    char sentence[200]="";

    /*
    Your code
    */

    //target character
   char target = argv[argc-1][0];

   //concatinate all argumanets except last one
   for(int i =1; i<argc-1;i++){
    strcat(sentence,argv[i]);
    if(i < argc -2){
        strcat(sentence, " ");
    }
   }

   //Search for the first occurence
   char *pos = strchr(sentence, target);

   printf("Sentence: %s\n", sentence);

   //Print the result
   if(pos !=NULL){
    int index = pos-sentence;
    printf("First occurence of '%c' at position %d\n",target,index);
   }
   else{
    printf("Character '%c' not found\n", target);
   }

    return 0;
}