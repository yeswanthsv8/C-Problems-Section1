#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();

printf("Number1: & Number2: & Number3:");
scanf("%d %d %d",&a,&b,&c);

printf("Smallest Among Three Is:");
if(a<b && a<c)
{
 printf("%d",a);
}

else if(b<c)
{
 printf("%d",b);
}

else
{
 printf("%d",c);
}

}
