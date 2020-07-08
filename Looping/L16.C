#include<stdio.h>
#include<conio.h>

void main()
{
int pow,base,product=1;
clrscr();

printf("Base: & Power:");
scanf("%d %d",&base,&pow);

while(pow>0)
{
  product=product*base;
  pow--;
}
printf("%d",product);

}