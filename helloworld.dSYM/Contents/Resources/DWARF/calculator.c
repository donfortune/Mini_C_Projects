#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;
    

    printf("Enter your operator:");
    scanf("%c", &operator);

    printf("enter number 1:");
    scanf("%lf", &num1);

    printf("enter number 2:");
    scanf("%lf", &num2);

    if (operator == '+'){
        result = num1 + num2;
        printf("your answer is %.1lf", result);

    }
    
    else if (operator == '-'){
        result= num1 - num2;
        printf("your answer is %.1lf", result);

    }

    else if (operator == '*'){
        result = num1 * num2;
        printf("your answer is %.1lf", result);

    }

    else if (operator == '/'){
        result = num1 / num2;
        printf("your answer is %.1lf", result);

    }

    else{
        printf("You entered an invalid operator!");
    }


    return 0;
}