#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,matnum[5][5],m,n,total=0;
clrscr();
printf("enter the row :");
scanf("%d",&m);
printf("enter the column :") ;
scanf("%d",&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("enter the number [%d][%d]:",i,j) ;
scanf("%d",&matnum[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
total=total+matnum[i][j];
}
}
printf("%d",total);
getch();
}
