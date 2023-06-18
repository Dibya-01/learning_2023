#include <stdio.h>

void bitconvertion(int n)
{
    int mask = 1<<31;
    for(int i = 0;i < 32;i++)
    {
        if(n & mask)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        mask >>=1;
    }
}
int main()
{
    int n;
    printf("Enter the 32-bit integer:");
    scanf("%d",&n);

    printf("After bit convertion:");
    bitconvertion(n);

    return 0;
}