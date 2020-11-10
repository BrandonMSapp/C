// Brandon Sapp / Edoras Class Account: cssc1727
// $ used as substitution for multiplication operations

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>


int stack[100];
int top = -1;

// method to push a value onto the stack, taking 
//the stack and the value as the input parameters 
void push(int stack[], int num){
    top++;
    stack[top] = num;
}

// method to pop the top value off the stack, taking 
// in the stack as an input parameter
int pop(int stack[]){
    int temp = stack[top];
    top--;
    return temp;
}

// calculate the mathematical result of the two previously
// popped values and the operand given by the user input
int calc(char operator, int num1, int num2){
    int result;
    char plus = '+';
    char minus = '-';
    char mul = '$';
    char div = '/';
    if(operator == plus){
        result = num2 + num1; 
    }
    if(operator == minus){
        result = num2 - num1; 
    }
    if(operator == mul){
        result = num2 * num1; 
    }
    if(operator == div){
        result = num2 / num1; 
    }
    return result;
}

int main(int argc, char *argv[]){
    char plus = '+';
    char minus = '-';
    char mul = '$';
    char div = '/';
    int val1;
    int val2;

    for(int i = 1; i < argc; i++){
        char arg = *argv[i];
        int val = atoi(argv[i]);

        if((isdigit(arg) == 0) && (arg == plus)){
            val1 = pop(stack);
            val2 = pop(stack);
            int res = calc(plus, val1, val2);
            push(stack, res);
        }
        else if((isdigit(arg) == 0) && (arg == minus)){
            val1 = pop(stack);
            val2 = pop(stack);
            int res = calc(minus, val1, val2);
            push(stack, res);
        }
        else if((isdigit(arg) == 0) && (arg == mul)){
            val1 = pop(stack);
            val2 = pop(stack);
            int res = calc(mul, val1, val2);
            push(stack, res);
        }
        else if((isdigit(arg) == 0) && (arg == div)){
            val1 = pop(stack);
            val2 = pop(stack);
            int res = calc(div, val1, val2);
            push(stack, res);
        }
        else{
            push(stack, val);
        }
    }
    printf("Program finished, end result is: %d\n" , pop(stack));
    return 0;
}

