#include <stdio.h>

int factorial(int n) {
if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int number;
    
do{
	printf("Enter a non-negative number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
    	printf("Factorial\n");
        printf("Factorial of %d is %d\n", number, factorial(number));
    }
}while(number<0);
    return 0;
}
