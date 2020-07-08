#include<stdio.h>
#include<conio.h>

void main()
{
int num;
clrscr();

printf("Number:");
scanf("%d",&num);

num=num%10;
printf("Last Digit Is: %d",num);
}