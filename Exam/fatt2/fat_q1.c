#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10
#define STRING_SIZE 100

char stack[MAX_SIZE][STRING_SIZE];
int top = -1;

void push(char *str) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full.\n");
        return;
    }
    top++;
    strcpy(stack[top], str);
    printf("'%s' pushed to stack.\n", str);
}

void printStack() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements are:\n");
    int i;
    for ( i = top; i >= 0; i--) {
        printf("%s\n", stack[i]);
    }
}

int main() {
    char input[STRING_SIZE];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter string %d: ", i + 1);
        	
        scanf("%99s", input);  
        push(input);
    }


    printStack();

    return 0;
}
