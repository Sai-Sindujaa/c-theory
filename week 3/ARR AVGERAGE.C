#include<stdio.h>
#include<conio.h>
void main()
{
int mark[5],i,n,sum=0;
float avg;
clrscr();
for(i=0;i<5;i++)
{
printf("enter the mark :");
scanf("%d",& mark[i]);
sum=sum+mark[i];
}
avg=sum/5;
printf("average mark : %f",avg);
getch();
}
