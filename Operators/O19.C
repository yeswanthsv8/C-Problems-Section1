#include<stdio.h>
#include<conio.h>

void main()
{
float fa,cel;
clrscr();

printf("Celsius:");
scanf("%f",&cel);

fa=cel*1.8+32;

printf("Fahrenheit:%f",fa);
}