#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("The %d Even Numbers Is:",n);
for(i=1,j=2;i<=n;i++,j=j+2)
{
  printf("%d\t",j);
}

}