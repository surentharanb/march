  #include<stdio.h>
void main()
{
	int b,i,min;
	scanf("%d",&b);
	int a[b];
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
		min=a[0];
	for(i=1;i<b;i++)
	{
	if(min>a[i])
	{
		min=a[i];
	}
	}
	printf("%d",min);	
}
