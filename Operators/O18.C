#include<stdio.h>
#include<conio.h>

void main()
{
float fa,cel;
clrscr();

printf("Fahrenheit:");
scanf("%f",&fa);
cel=(fa-32)*0.5556;

printf("Celsius:%f",cel);
}