#include<stdio.h>
#include<conio.h>

void main()
{
int base,height,area;
clrscr();

printf("Lemgth: & Breadth:");
scanf("%d %d",&base,&height);

area=0.5*height*base;
printf("Area: %d",area);
}