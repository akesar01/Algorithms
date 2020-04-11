#include<stdio.h>  
int max(int a, int b) { 
    return (a > b)? a : b; 
} 
int knapSack(int W, int wt[], int val[], int n) 
{ 
    
   if (n == 0 || W == 0) 
       return 0; 
   if (wt[n-1] > W) 
       return knapSack(W, wt, val, n-1); 
  
   else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), 
                    knapSack(W, wt, val, n-1) 
                  ); 
} 
void main()
{
    int size1,size2,W;
    int arr1[20];
    int arr2[20];
printf("Enter the required weight\n");
scanf("%d",&W);
printf("Enter the size of value array\n");
scanf("%d",&size1);
printf("Enter the elements of array\n");
for(int i = 0; i <size1; i++)
{
    scanf("%d",&arr1[i]);
}
printf("Enter the elements of weight array\n");
for(int i = 0; i <size1; i++)
{
    scanf("%d",&arr2[i]);
}
printf("%d",knapSack(W,arr2,arr1,size1));
}




