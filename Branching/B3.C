#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2;
clrscr();

printf("Number1: & Number2:");
scanf("%d %d",&num1,&num2);

if(num1<num2)
{
 printf("Smallest Number Is:%d",num1);
}

else
{
 printf("Smallest Number Is:%d",num2);
}

}
