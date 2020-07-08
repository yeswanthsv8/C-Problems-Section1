#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,num,sum=0;
clrscr();

printf("Input:");
scanf("%d",&n);

printf("Enter Elements:");
for(i=1;i<=n;i++)
{
   scanf("%d",&num);
   if(num>0)
   {
      sum=sum+num;
   }

printf("Sum Is: %d",sum);
}