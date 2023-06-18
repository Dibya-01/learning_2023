#include <stdio.h>

void printnumber(int n)
{
    for(int i=1;i<=n;i++){
        printf("%d",i);
    }
}

void printspace(int n){
    for(int i=1;i<=n;i++)
    {
        printf(" ");
    }
}

void reverseno(int n)
{
    for(int i =n;i >=1;i--)
    {
        printf("%d",i);
    }
}
int main()
{
    int n, i;
    printf("Enter thr number:");
    scanf("%d",&n);

    for(i = n;i >= 1;i--){
        printnumber(i);
        printspace(n-i);
        reverseno(i);
        printf("\n");
    }

    return 0;
}