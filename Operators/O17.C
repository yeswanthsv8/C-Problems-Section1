#include<stdio.h>

void main()
{
unsigned int pa,days,si;
float rate;
clrscr();

printf("Principal Amount: & Days:");
scanf("%d %d",&pa,&days);

printf("Rate:");
scanf("%f",&rate);

si=(pa*days*rate)/100;
printf("Simple Interest:%d",si);
}