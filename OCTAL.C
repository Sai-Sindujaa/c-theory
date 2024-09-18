#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem,i=1,sum=0;
clrscr();
printf("enter the number:");
scanf("%d",&num);
while(num!=0)
{
rem=num%8;
num=num/8;
sum=sum+num;
i=i*10;
}
printf("%d",sum);
getch();
}
