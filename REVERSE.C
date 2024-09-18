#include<stdio.h>
#include<conio.h>
void main()
{
int  num,rem,reverse=0,num_1;
clrscr();
printf("enter a number : ");
scanf("%d",&num);
num_1 = num;
for(;num_1>0;)
{
rem= num_1%10;
num_1=num_1/10;
reverse=(reverse*10)+rem;
}
printf("%d\n",reverse);
getch();
}