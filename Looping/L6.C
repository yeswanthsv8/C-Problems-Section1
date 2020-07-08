#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum=0;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("The Sum Of %d Natural Numbers Is:",n);
for(i=1;i<=n;i++)
{
  sum=sum+i;
}
printf("%d",sum);

}