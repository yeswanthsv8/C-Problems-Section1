#include<stdio.h>
#include<conio.h>

void main()
{
int i;
char sta,stp;
clrscr();

printf("Sta: & Stp: ");
scanf("%c %c",&sta,&stp);

printf("Alphabets In Upper Case:");
for(i=sta;i<=stp;i++)
{
  printf("%c\t",i);
}

}