#include<stdio.h>
#include<conio.h>

void main()
{
int n,i;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("The %d Natural Numbers Is:",n);
for(i=1;i<=n;i++)
{
  printf("%d\t",i);
}

}