#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[10],arr2[10],arr3[10],arr4[10],arr5[10];
int i,n;
clrscr();
printf("enter no of numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("arr1[%d]=",i);
scanf("%d",&arr1[i]);
}
for(i=0;i<n;i++)
{
printf("arr2[%d]=",i);
scanf("%d",&arr2[i]);
}
for(i=0;i<n;i++)
{
printf("arr3[%d]=",i);
arr3[i]=arr2[i]+arr1[i];
printf("%d\n",arr3[i]);
}
for(i=0;i<n;i++)
{
if(arr1[i]>arr2[i])
arr4[i]=arr1[i];
if(arr1[i]<arr2[i])
arr4[i]=arr2[i];
printf("arr4[%d]=%d\n",i,arr4[i]);
}
for(i=0;i<n;i++)
{
if(arr1[i]>arr2[i])
arr5[i]=arr2[i];
if(arr1[i]<arr2[i])
arr5[i]=arr1[i];
printf("arr5[%d]=%d\n",i,arr5[i]);
}
getch();
}
