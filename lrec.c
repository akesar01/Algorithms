#include<stdio.h>
#include<time.h>
int ls(int a[],int start ,int end,int key )
{
if (key==a[start])
{
return start;
}
else
{
return ls(a,start+1,end,key);
}

}

void main()
{
int a[100];
int key,size,result;
int startt,endt,tim;              
printf("Enter the size of array");
scanf("%d",&size);
printf("Enter the elements");
for (int i=0;i<size;i++)
{
scanf("%d",&a[i]);  
}
printf("KEY :");
scanf("%d",&key);
startt=clock();
result=ls(a,0,size-1,key);
endt=clock();
tim=endt-startt;

if (result==-1)
{
printf("Element not found\n");
}
else
{
printf("element found at %d\n",result);
}
printf("the time required is %d",tim);
}
