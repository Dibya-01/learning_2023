
#include <stdio.h>

struct time
{
    int hours;
    int minute;
    int second;
};

struct time Timediff(struct time t1,struct time t2)
{
    struct time diff;
    int time1_second = t1.hours*3600 + t1.minute*60 + t1.second;
    int time2_second = t2.hours*3600 + t2.minute*60 + t2.second;

    int diff_second = time1_second - time2_second;
    if(diff_second < 0)
    {
        diff_second = -diff_second;

    } 

    diff.hours = diff_second / 3600;
    diff_second %= 3600;
    diff.minute = diff_second / 60;
    diff.second %= 60;

    return diff;

}

int main()
{
    struct time starttime,endtime,difference;
    printf("enter details of starting time:\n");
    printf("Hours:\n");
    scanf("%d",&starttime.hours);
    printf("minutes:\n");
    scanf("%d",&starttime.minute);
    printf("Seconds:\n");
    scanf("%d",&starttime.second);

    printf("enter details of ending time:\n");
    printf("Hours:\n");
    scanf("%d",&endtime.hours);
    printf("minutes:\n");
    scanf("%d",&endtime.minute);
    printf("Seconds:\n");
    scanf("%d",&endtime.second);

    difference = Timediff(endtime,starttime);
    printf("Time difference is: %d hours,%d minute,%d second\n",difference.hours,difference.minute,difference.second);
    return 0;
}
