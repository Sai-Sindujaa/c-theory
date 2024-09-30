#include<stdio.h>
#include<conio.h>
void main()
{
int m,i,j,total,scores[40][5],maxmark=0,minmark=500,maxid,minid;
float average;
clrscr();
printf("enter no of students");
scanf("%d",&m);
for(i=0;i<m;i++)
{
total=0;
printf("enter the 5 scores of students %d ",i+1);
for(j=0;j<5;j++)
{
scanf("%d",&scores[i][j]);
}
}
for(i=0;i<m;i++)
{total=0;
for(j=0;j<5;j++)
{
total=total+scores[i][j];
}
average=(float)total/5;
printf("\n total marks and average of students %d : %d %f\n",i+1,total,average);
if(total > maxmark)
{
maxmark=total;
maxid=i+1;
}
if(total<minmark)
{
minmark=total;
minid=i+1;
}
getch();
}
getch();
}
