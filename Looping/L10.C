#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum=0;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("Sum Of Odd Numbers till %d Is:",n);
for(i=1;i<=n;i=i+2)
{
  sum=sum+i;
}
printf("%d",sum);

}