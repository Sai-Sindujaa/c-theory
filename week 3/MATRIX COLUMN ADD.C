#include<stdio.h>
#include<conio.h>
void main()
{
int matnum[10][10],n,m,columntotal,i,j,total3;
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

for(j=0;j<m;j++)
{columntotal=0;
for(i=0;i<n;i++)
{
columntotal = columntotal +matnum[i][j];
}

printf("%d\n",columntotal);
}
getch();
}
