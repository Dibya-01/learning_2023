#include <stdio.h>
#include <limits.h>

void MinMaxDigits(int n) {
    int i, num, smallest = INT_MAX, largest = INT_MIN;

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        int digit;
        while (num > 0) {
            digit = num % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
            num /= 10;
        }
    }

    if (smallest == INT_MAX || largest == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    int n;

    printf("Enter the total no of numbers to entered: ");
    scanf("%d", &n);

    MinMaxDigits(n);

    return 0;
}
