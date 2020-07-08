#include<stdio.h>
#include<conio.h>

void main()
{
int kby,by;
clrscr();

printf("KiloBytes:");
scanf("%d",&kby);

by=kby*1024;
printf("Bytes: %d",by);
}