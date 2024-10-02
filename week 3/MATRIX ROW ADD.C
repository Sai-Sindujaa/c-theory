#include<stdio.h>
#include<conio.h>
void main()
{
int matnum[10][10],n,m,rowtotal,i,j,total3;
clrscr();
printf("enter the row");
scanf("%d",&m);
printf("enter the coloumn:");
scanf("%d",&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{printf("enter the matrix[%d][%d]:",i,j);
scanf("%d",&matnum[i][j]);
}
}

for(i=0;i<m;i++)
{rowtotal=0;
for(j=0;j<n;j++)
{
rowtotal = rowtotal +matnum[i][j];
}

printf("%d\n",rowtotal);
}
getch();
}
