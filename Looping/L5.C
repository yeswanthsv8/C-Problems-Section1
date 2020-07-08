#include<stdio.h>
#include<conio.h>

void main()
{
int n,i;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("Natural Numbers In Reverse:");
for(i=n;i>=1;i--)
{
  printf("%d\t",i);
}

}