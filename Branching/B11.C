#include<stdio.h>
#include<conio.h>

void main()
{
int l1,l2,num1,num2;
clrscr();

printf("Number1: & Number2: ");
scanf("%d %d",&num1,&num2);

l1=num1%10;
l2=num2%10;

if(l1==l2)
{
  printf("Equal.");
}

else
{
  printf("Not Equal.");
}

}
