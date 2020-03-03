#include<stdio.h>
int st[20],fi[20];
int start,final;
void nm()
{
int i=0;
int j=0;
int count++;
for( int i = 0 ;i < size ; i++ ) {
 int temp = fi[ i ];    
  int j = i;
    while( j > 0  && temp < fi[ j -1]) {
    fi[ j ] = fi[ j-1];   
    j= j-1;
   }
   fi[ j ] = temp;
   }
 while(j<start)
 {
 
 while(i<final)
 {
 if (fi[i]<st[i+1]
 {
 count ++;
 }
 }
 

          		

void main()
{
printf("Enter the size of starting time array");
scanf("%d",start);
printf("Enter the size of final time array");
scanf("%d",final);
printf("Enter the elements for first array");
for(int i=0;i<start;i++)
{
scanf("%d",st[i]);
}
printf("Enter the element of second array");
for (int j=0; j<final;j++)
{
scanf("%d",&fi[20])
}
nm()
}
