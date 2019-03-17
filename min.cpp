#include<stdio.h>
int time = 0; 
int minutes = 0;
int hours = 0;
int main()
{
    int time;
    scanf("%d",&time);
    if(time>0)
    {
    minutes = time % 60; 
    hours = (time - minutes) / 60;
    printf("%d %d",hours, minutes);
    }
    else
    {
        printf("Invalid time");
    }
return 0;
}