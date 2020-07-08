#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,r;
clrscr();

printf("Number: & Rows:");
scanf("%d %d",&n,&r);

printf("Multiplication of Table %d Is:",n);
for(i=1;i<=r;i++)
{
  printf("%d * %d= %d\t\n",i,n,i*n);
}

}