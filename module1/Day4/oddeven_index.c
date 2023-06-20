#include <stdio.h>

void even_odd_sum(int *arr, int n) {
  int even_sum = 0;
  int odd_sum = 0;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      even_sum += arr[i];
    } else {
      odd_sum += arr[i];
    }
  }

  printf("The sum of even index elements is %d\n", even_sum);
  printf("The sum of odd index elements is %d\n", odd_sum);
}

int main() {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  even_odd_sum(arr, n);

  return 0;
}
