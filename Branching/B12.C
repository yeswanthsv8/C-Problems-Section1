#include<stdio.h>
#include<conio.h>

void main()
{
int pr,qty,bill;
float dis=0;
clrscr();

printf("Price: & Quantity:");
scanf("%d %d",&pr,&qty);

bill=pr*qty;

if(bill>=5000)
{
 dis=bill*0.10;
 bill=bill-dis;
 printf("Bill: %d",bill);
}
else if(bill>=1000)
{
 dis=bill*0.05;
 bill=bill-dis;
 printf("Bill: %d",bill);
}
else
{
  printf("Bill: %d",bill);
}

}
