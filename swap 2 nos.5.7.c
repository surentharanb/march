#include<conio.h>
void main()
{
  int a,b,c;
  printf("enter the values of a and b \t:");
  scanf("%d%d",&a,&b);
  printf(" the before swaping numbers %d\t%d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("the after swaping numbers are %d\t%d\n",a,b);
}
