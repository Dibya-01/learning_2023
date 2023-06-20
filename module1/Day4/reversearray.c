#include <stdio.h>

int main()
{
    int arr[100],n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("Array before reverse:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    int first,last,temp;
    first = 0;
    last = n-1;

    while(first<last)
    {
        temp = arr[first];
        arr[first] = arr[last];
        arr[last ]= temp;

        first++;
        last--;
    }

    printf("Array after reverse:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }


    return 0;
}