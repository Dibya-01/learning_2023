#include <stdio.h>

struct point
{
    int x;
    int y;
};

void swap(struct point* point1,struct point* point2)
{
    int temp;
    temp = point1->x;
    point1->x = point2->x;
    point2->x = temp;

    temp = point1->y;
    point1->y = point2->y;
    point2->y = temp;
}

int main()
{
    struct point p1,p2;
    printf("Enter the co-ordinate of pointer1\n");
    printf("x =");
    scanf("%d",&p1.x);
    printf("y =");
    scanf("%d",&p1.y);

    printf("Enter the co-ordinate of pointer2\n");
    printf("x =");
    scanf("%d",&p2.x);
    printf("y =");
    scanf("%d",&p2.y);

    printf("Before swapping\n");
    printf("point1 x:%d,y:%d\n",p1.x,p1.y);
    printf("point2 x:%d,y:%d\n",p2.x,p2.y);

    swap(&p1,&p2);

    printf("After swapping\n");
    printf("point1 x:%d,y:%d\n",p1.x,p1.y);
    printf("point2 x:%d,y:%d\n",p2.x,p2.y);

    return 0;
    
}
