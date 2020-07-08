#include<stdio.h>
#include<conio.h>

void main()
{
int bn,rem,sum=0,pro=1;
clrscr();

printf("Enter Binary Number:");
scanf("%d",&bn);

while(bn!=0)
{
 rem=bn%10;
 sum=sum+pro*rem;
 pro=pro*2;
 bn=bn/10;
}
printf("Decimal Number Is: %d",sum);
}
