
#include <stdio.h>

int main( void ) {

    // define suitable data
    char input[100];
    int num1, num2;
    char op;

    printf("Enter expression : ");
    // use scanf to read from the terminal
    fgets(input, sizeof(input), stdin);

    int count = sscanf(input, "%d %c %d", &num1, &op, &num2);

    // print the output from scanf and the data values 
    if (count == 3){
        int result; 

        switch (op)
        {
        case '+':
            /* code */
            result = num1 + num2;
            break;
        
        case '-':
            result = num1 - num2;
            break;
        
        case '*':
            result = num1 * num2;
            break;
        
        case '/':
            if (num2 == 0){
                printf("Zero error\n");
                return 0;
            }
            
            result = num1 / num2;
            break;
        
        default:
            printf("Unknown operator\n");
            break;
        }

        printf("%d %c %d = %d\n", num1, op, num2, result);
    }
    else{
        printf("Invalid input format\n");
    }
    
    return 0;
}