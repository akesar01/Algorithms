#include<stdio.h>
#include<stdlib.h>
void main()
{
int size,key;
int a[20];
int start=0;
int count=0;
int pos;
int m,l;
int mid;
printf("Enter the size of the array\n");
scanf("%d",&size);
printf("Enter the items of array\n");
for(int i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key\n ");
scanf("%d",&key);
int end=size-1;
while(start <= end)
{
mid=start + (end - start)/2;
if (a[mid]==key)
{

count++;
break;
}
else if (a[mid]<key)
	{
		start=mid+1;
	}
	else
	{
		end=mid-1;
	}
}
m=mid;
while(2)
{
m++;
if(a[m]==key && m<size)
{
count++;
}
else 
{
break;
}
}
l=mid;
while(1)
{
l--;
if(a[l]==key && l>=0)
{
count++;
}
else
{
break;
}
}
printf("START : %d",l+1);
printf("END : %d:",m-1);
}


































