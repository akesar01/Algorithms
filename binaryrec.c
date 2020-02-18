#include<stdio.h>
int bin(int a[],int start ,int end,int key )
{
int mid;
mid =start +(end- start)/2;
if (key==a[mid])
{
printf("Emement found at %d",mid);
}
else if (a[mid] > key)
{
return bin (a,start,mid-1,key);
}
else 
{
return bin(a,mid+1,end,key);
}
return -1;
}

void main()
{
int a[100];
int key,size,result;
printf("Enter the size of array");
scanf("%d",&size);
printf("Enter the elements");
for (int i=0;i<size;i++)
{
scanf("%d",&a[i]);  
}
printf("KEY :");
scanf("%d",&key);
result=bin(a,0,size-1,key);
if (result==-1)
{
printf("Element not found");
}
else
{
printf("element found at %d",result);
}
}
