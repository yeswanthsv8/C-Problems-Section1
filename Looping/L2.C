#include<stdio.h>
#include<conio.h>

void main()
{
int n,i;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("The %d Whole Numbers Is:",n);
for(i=0;i<=n;i++)
{
  printf("%d\t",i);
}

}