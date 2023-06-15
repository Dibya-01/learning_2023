#include <stdio.h>

int findBiggestIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findBiggestTernary(int num1, int num2) {
    int biggest = (num1 > num2) ? num1 : num2;
    return biggest;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int resultIfElse = findBiggestIfElse(num1, num2);
    int resultTernary = findBiggestTernary(num1, num2);
    
    printf("Using if-else: %d\n", resultIfElse);
    printf("Using ternary operator: %d\n", resultTernary);
    
    return 0;
}
