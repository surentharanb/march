#include<conio.h>
int main()
{
  int a,b;
  clrscr();
  printf("enter the values of a and b \t:");
  scanf("%d%d",&a,&b);
  printf(" the before swaping numbers %d\t%d\n",a,b);
 a=a^b;
 b=a^b;
 a=a^b;

  printf("the after swaping numbers are %d\t%d\n",a,b);
  return 0;
}
