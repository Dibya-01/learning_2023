#include <stdio.h>

int main()
{
    int arr[100],n;
    int sum_even = 0;
    int sum_odd = 0;

    printf("Enter size of array: ");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
        {
            sum_even += arr[i];
        }
        else if(arr[i]%2 != 0)
        {
            sum_odd += arr[i];
        }
    }
    printf("Sum of even elements are: %d",sum_even);
    printf("\n");
    printf("Sum of odd elements are: %d",sum_odd);
}