#include<stdio.h>

void main()
{
    int a,b,c,d,e,f;
    printf("enter 1st time in hours and minutes");
    scanf("%d %d",&a,&c);
    printf("enter 2nd time in hours and minutes");
    scanf("%d %d",&b,&d);
    e=a-b;
    f=c-d;
    printf("the difference in time is %d\t%d",e,f);
    getch();
}
