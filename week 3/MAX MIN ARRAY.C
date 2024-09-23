#include<stdio.h>
#include<conio.h>
void main()
{
int num[10],n, i,min=99,max=0 ;
clrscr();
printf("how many number :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
if(max<num[i])
max=num[i];
if(min>num[i])
min=num[i];
}
printf("maximum = %d\nminimum = %d",max,min);
getch();
 }
