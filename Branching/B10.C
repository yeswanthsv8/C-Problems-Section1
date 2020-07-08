#include<stdio.h>
#include<conio.h>

void main()
{
int mar;
clrscr();

printf("Marks:");
scanf("%d",&mar);

if(mar>96 && mar<=100)
{
 printf("O Grade.");
}

else if(mar>91 && mar<=95)
{
 printf("A Grade.");
}

else if(mar>81 && mar<=90)
{
  printf("B Grade.");
}

else if(mar>71 && mar<=80)
{
  printf("C Grade.");
}

else if(mar>61 && mar<=70)
{
  printf("D Grade.");
}

else if(mar>50 && mar<=60)
{
  printf("E Grade.");
}

else
{
  printf("F Grade.");
}
}

