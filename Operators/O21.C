#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2;
clrscr();

printf("Num1: & Num2:");
scanf("%d %d",&num1,&num2);

num1=num1+num2;
num2=num1-num2;
num1=num1-num2;


printf("After Swapping Num1 & Num2 Is:%d %d",num1,num2);
}