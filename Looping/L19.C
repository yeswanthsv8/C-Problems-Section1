#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum=0;
clrscr();

while(1)
{
  scanf("%d",&n);
  if(n>0)
  {
    sum=sum+n;
  }
  else
  {
  break;
  }
}
printf("Sum Is: %d",sum);
}