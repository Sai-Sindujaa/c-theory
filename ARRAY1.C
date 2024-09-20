#include<stdio.h>
#include<conio.h>
void main()
{
int mark[40],n ,i ,average,sum=0  ;
clrscr();
printf("enter the no of students :");
scanf("%d",&n);
for(i=0; i<n;i++)
{
printf("mark : %d",i);
scanf("%d",&mark[i]);
sum=sum + mark[i];
}
printf("sum=%d",sum);
printf("\navg=%f",((float)sum/n));
getch();
}
