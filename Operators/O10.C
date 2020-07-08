#include<stdio.h>
#include<conio.h>

void main()
{
int len,wide,area;
clrscr();

printf("Lemgth: & Wide:");
scanf("%d %d",&len,&wide);

area=0.5*(len*wide);
printf("Area: %d",area);
}