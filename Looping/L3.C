#include<stdio.h>
#include<conio.h>

void main()
{
int n,i;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("Odd Numbers till %d Is:",n);
for(i=1;i<=n;i=i+2)
{
  printf("%d\t",i);
}

}