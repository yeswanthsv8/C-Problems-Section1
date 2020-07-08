#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2,out;
char op;
clrscr();

printf("Number1: & Operator:  & Number2: ");
scanf("%d %c %d",&num1,&op,&num2);


switch(op)
{
 case '+':
 out=num1+num2;
 break;

 case '-':
 out=num1-num2;
 break;

 case '*':
 out=num1*num2;
 break;

 case '/':
 out=num1/num2;
 break;

 case '%':
 out=num1%num2;
 break;

 default:
 printf("Wrong Choice.");
}

printf("Output: %d",out);

}
