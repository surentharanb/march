  
#include<stdio.h>
void main()
{
	int b,i,max;
	scanf("%d",&b);
	int a[b];
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
		max=a[0];
	for(i=1;i<b;i++)
	{
	if(max<a[i])
	{
		max=a[i];
	}
	}
	printf("%d",max);	
}
