#include<stdio.h>
#include<conio.h>

void main()
{
int r;
float pi=3.14,area;
clrscr();

printf("Radius:");
scanf("%d",&r);

area=pi*(r*r);
printf("Area: %f",area);
}