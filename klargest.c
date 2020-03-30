#include<stdio.h>
#include<time.h>
int startt,endt,timesort;
void k_lar(int arr[],int size,int k)
{
for(int i=1;i<size;i++)
{
    int temp=arr[i];
    int j;
    j=i;
    while(j>0 && temp<arr[j-1])
    {
        arr[j]=arr[j-1];
        j--;
        
    }
    arr[j]=temp;
    
    
}
 
for(int l=0;l<size;l++)
{
    printf("%d ",arr[l]);
}
printf("\n");
printf("The %d largest element are : ",k);
for(int i=size-1;i>=0;i--)
{
    
    int temp =arr[i];
    if(temp !=arr[i-1] && k>0)
    {
        printf("%d " ,arr[i]);
        k--;
        
    }
    
}
printf("\n");
printf("Time taken is : ");
    endt=clock();
    timesort=((endt-startt)/2);
    printf("%d",timesort);



}
void main()
{
    int arr[]={8,2,8,8,1};
    startt=clock();
    k_lar(arr, 5,3);
}
