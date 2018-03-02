#include <stdio.h>
void main()
{
	int min,rem,hr;
    printf("enhter the minutes:");
	scanf("%d",&min);
	hr=min/60;
	rem=min-(60*hr);
	printf("%d:%d",hr,rem);
	getch();
}
