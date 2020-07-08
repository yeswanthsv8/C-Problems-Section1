#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2,diff;
clrscr();

printf("Number1: & Number2: ");
scanf("%d %d",&num1,&num2);

diff=num1-num2;

if(diff%2==0)
{
 printf("Even Number.");
}

else
{
 printf("Odd Number.");
}

}
