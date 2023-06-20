#include <stdio.h>

int main()
{
    int arr[100];
    int n,max,min;
    printf("Enter the size of array:");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("max number is:%d",max);
    printf("\n");
    printf("min number is:%d",min);
    return 0;
    
}