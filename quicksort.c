#include<stdio.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition(int arr[],int l,int r){
    int pivot =arr[r];
    int i=l-1;
    for ( int j = l; j <r; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);


        }
    }
    swap(&arr[i + 1], &arr[r]); 
    return (i + 1); 
    
}
void quickSort(int arr[],int l ,int r)
{
    if (l<r)

    {
        int pi=partition(arr,l,r);
        quickSort(arr, l, pi - 1); 
        quickSort(arr, pi + 1, r);

    }
}
void main()
{
    int arr[]={3,2,5,6,9,0};
    int n =sizeof(arr)/sizeof(arr[0]);
    printf("Array before the sorting \n");
    for(int i=0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    quickSort(arr,0,n-1);
    printf("The array after the sorting is \n");
    for(int i=0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
