#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int rollno;
    float mark;
};

int main()
{
    int n;
    printf("Enter the total number of studentds:");
    scanf("%d",&n);

    struct student* child = (struct student*)malloc(n * sizeof(struct student));
    if(child == NULL)
    {
        printf("memory allocation fails");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of student %d\n",i+1);
        printf("Name:\n");
        scanf("%s",child[i].name);
        printf("Roll no:\n");
        scanf("%d",&(child[i].rollno));
        printf("Mark:\n");
        scanf("%f",&(child[i].mark));
    }
    
    printf("DISPLAYING..\n");

    for(int i = 0;i < n;i++)
    {
        printf("Details of student %d\n",i+1);
        printf("Name is:%s\n",child[i].name);
        printf("Roll no is:%d\n",child[i].rollno);
        printf("Mark is:%f\n",child[i].mark);
    }

    free(child);
    return 0;
}
