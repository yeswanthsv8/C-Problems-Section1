#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int x,y,x1,x2,y1,y2;
float d;
clrscr();

printf("x1: & x2: && y1: & y2:");
scanf("%d %d %d %d",&x1,&x2,&y1,&y2);

x=x2-x1;
y=y2-y1;

d=sqrt(x*x+y*y);
printf("Distance: %f",d);
}