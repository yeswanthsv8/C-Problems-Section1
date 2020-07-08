#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("The %d Odd Numbers Is:",n);
for(i=1,j=1;i<=n;i++,j=j+2)
{
  printf("%d\t",j);

}

}