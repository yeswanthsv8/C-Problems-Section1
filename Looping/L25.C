#include<stdio.h>
#include<conio.h>

void main()
{
int dn,rem,sum=0,base=1;
clrscr();

printf("Enter Decimal Number:");
scanf("%d",&dn);

while(dn>0)
{
  rem=dn%2;
  sum=sum+rem*base;
  dn=dn/2;
  base=base*10;
}
printf("Binary Number Is: %d",sum);
}
