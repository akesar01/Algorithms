#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int findpivot(int *arr,int start,int end){
    if(start==end)
    return start;
    if (start>end)
    return -1;
int mid= start +(end-start)/2;

 if (arr[mid]>arr[mid+1]){
    return mid;
 }
 if (arr[mid]<arr[mid-1]){
     return mid-1;
 }
 if(arr[start]>= arr[mid])
 return findpivot(arr,start,mid-1);
 return findpivot(arr,mid+1,end);

}
int bs(int *arr,int start,int end,int key){

    int mid = start +(end-start)/2;

    if(arr[mid]==key)
    return mid;
    else if(arr[mid]<key)
    {
        bs(arr,mid+1,end,key);
    }
    else{
        bs(arr,start,mid-1,key);
    }
}


int search(int *arr,int start,int end,int key){
    int pivot =findpivot(arr,start,end);
    if (pivot==-1){
       return  bs(arr,start,end,key);
    }
    if(arr[pivot]==key){
        return pivot;
    }

    if(arr[start]>=key){
        return bs(arr,pivot+1,end,key);
    }
    return bs(arr,start,pivot-1,key);
}




void main(){
    int count;
    printf("Enter the size of array");
    scanf("%d",&count);

    int *arr =(int *)malloc(count * sizeof(int));
    
    printf("Enter the elements of array");
   
    for (int i = 0; i <count ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the key");
    int key;
    scanf("%d",&key);
    int startt = clock();

    int a= search(arr,0,count-1,key);
    int endt =clock();
    printf("Element id found at %d position\n",a+1);
    printf("The Time taken To run this program is %d",(endt-startt)/2);
}