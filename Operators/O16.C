#include<stdio.h>
#include<conio.h>

void main()
{
int kby,by;
clrscr();

printf("Bytes:");
scanf("%d",&by);

kby=by/1024;
printf("KiloBytes: %d",kby);
}