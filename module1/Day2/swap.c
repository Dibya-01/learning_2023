#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap(void *a, void *b, size_t size) {
    char *temp = (char *)malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
    /*temp =a;
    a=b;
    b=temp;
    free(temp);*/
}

int main() {
    int num1 = 5, num2 = 10;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    char char1 = 'A', char2 = 'B';
    printf("Before swap: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swap: char1 = %c, char2 = %c\n", char1, char2);

    double double1 = 3.14, double2 = 2.71;
    printf("Before swap: double1 = %f, double2 = %f\n", double1, double2);
    swap(&double1, &double2, sizeof(double));
    printf("After swap: double1 = %f, double2 = %f\n", double1, double2);

    return 0;
}
