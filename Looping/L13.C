#include<stdio.h>
#include<conio.h>

void main()
{
int num;
clrscr();

printf("Number:");
scanf("%d",&num);

while(num>=10)
{
  num=num/10;
}
printf("%d",num);
}