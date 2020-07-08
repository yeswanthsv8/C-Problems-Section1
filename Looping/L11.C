#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum=0,num;
clrscr();

printf("N:");
scanf("%d",&n);

printf("Enter %d Numbers:",n);
for(i=1;i<=n;i++)
{
   scanf("%d",&num);
   sum=sum+num;
}
printf("The Sum Of Given Number Is:");
printf("%d",sum);
}