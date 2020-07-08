#include<stdio.h>
#include<conio.h>

void main()
{
int num1;
clrscr();

printf("Number1:");
scanf("%d",&num1);

if(num1>99 && num1<1000)
{
 printf("Three Digit Number.");
}

else
{
 printf("Not Three Digit Number.");
}

}
