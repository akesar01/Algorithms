#include<stdio.h>
#include<string.h>
int a[20];
int size;
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void ls()
{
	for( int i = 0 ;i < size ; i++ ) {
    		int temp = a[ i ];    
    			int j = i;
    			while( j > 0  && temp < a[ j -1]) {
    					a[ j ] = a[ j-1];   
    					j= j-1;
   					}
    					a[ j ] = temp;       
     					}
     for (int j=0;j<size;j++)
     {
     printf("%d",a[j]);
     }
       
}

void main()
{
printf("enter the size of array");
scanf("%d",&size);
printf("Enter the elements");
for (int i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
ls();
}
