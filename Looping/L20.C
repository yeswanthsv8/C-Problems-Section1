#include<stdio.h>
#include<conio.h>

void main()
{
int n,i=1,num,sum=0;
clrscr();

printf("Input:");
scanf("%d",&n);

printf("Enter Elements:");

while(i<=n)
{
   scanf("%d",&num);
   if(num>0)
   {
      sum=sum+num;
      i++;
   }
}
printf("Sum Is: %d",sum);
}
