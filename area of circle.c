/***to find the area of circle****/
#include<stdio.h>
//#include<conio.h>
#define pi 3.14

void main()
{
   int r;
   float area;
   //clrscr();
   printf("\nEnter radius:");
   scanf("%d",&r);
   area=pi*r*r;
   printf("\n area of circle is:%f",area);
  // getch();
}



