#include<stdio.h>
#include<conio.h>
void main()
{
int  num ,max=0,min=9,rem;
clrscr();
printf("enter a number :");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
if(max<rem)
max=rem;
if(min>rem)
min=rem;
num=num/10;
}
printf("%d",max-min);
getch();
}