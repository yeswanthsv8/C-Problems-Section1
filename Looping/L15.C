#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2,sum=0;
clrscr();

printf("Number1: & Number2:");
scanf("%d %d",&num1,&num2);

printf("\nProduct Is:");
while(num2>0)
{
  sum=sum+num1;
  num2--;
}
printf("%d",sum);
}
