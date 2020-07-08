#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2,temp;
clrscr();

printf("Num1: & Num2:");
scanf("%d %d",&num1,&num2);

temp=num1;
num1=num2;
num2=temp;

printf("After Swapping Num1 & Num2 Is:%d %d",num1,num2);
}