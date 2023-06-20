#include <stdio.h>

int main()
{
    int arr[100],n,avg;
    int sum = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum +arr[i];
    }
    printf("Sum of elements are: %d",sum);
    avg = sum/n;
    printf("\n");
    printf("Average is: %d",avg);

    return 0;
}