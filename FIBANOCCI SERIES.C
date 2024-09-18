#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum_1,i=0,j=1,sum;
clrscr();
printf("enter a num :");
scanf("%d",&num);
for(;i<=num;)
{
sum=i+j;
printf(" %d + %d = %d\n", i,j,sum);
i=sum;
j++;
}
getch();
}
