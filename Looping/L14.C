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
if(num%2==0)
{
printf("Even.");
}

else
{
printf("Odd.");
}

}