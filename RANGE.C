#include<stdio.h>
#include<conio.h>
void main()
{
int i ,a, num ,max=0,min=9;
clrscr();
printf("enter the number:");
scanf("%d",&num);
for(i=num;i!=0;i=i/10)
{
a=i%10;
if(a>max)
max=a;
if(a<min)
min=a;
}
printf("\nmax = %d \nmin = %d \ndiff = %d ",max,min,max-min);
getch();
}
