#include<stdio.h>
void main() {
    int a=0,b=1,f,n,i;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=2;i<n;i++)
{     f=a+b;
       a=b;
       b=f;
       printf(" %d\t",f);
}
    
}
