#include<stdio.h>
#include<conio.h>

void main()
{
int n,i;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("Multiplication of Table %d Is:",n);
for(i=1;i<=10;i++)
{
  printf("%d * %d= %d\t\n",i,n,i*n);
}

}