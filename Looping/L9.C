#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum=0;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("The Sum Of Even Numbers till %d Is:",n);
for(i=2;i<=n;i=i+2)
{
  sum=sum+i;
}
printf("%d",sum);
}