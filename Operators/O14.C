#include<stdio.h>
#include<conio.h>

void main()
{
int day,wag,bp,np;
float hra,da,pf;
clrscr();

printf("Days: & Wages:");
scanf("%d %d",&day,&wag);

bp=day*wag;
printf("BasicPay: %d",bp);

da=bp*0.05;
hra=bp*0.10;
pf=bp*0.12;

np=bp+hra+da-pf;
printf("\nHRA:%f \nDA:%f \nPF:%f NETPAY:%d",hra,da,pf,np);
}