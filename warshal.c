#include<stdio.h>
void warshal(int arr[20][20],int n)
{
for(int k=0;k<n;k++)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]!=1 && (arr[i][k] ==1 && arr[k][i]==1 ))
            {
                arr[i][j]=1;
            }
        }
    }
}
printf("The resulting matrix is\n");
for(int l=0;l<n;l++)
{
    for(int m=0;m<n;m++)
    {
        printf("%d ",arr[l][m]);
    }
    printf("\n");
}

}
void main()
{
    int size;
    int arr[20][20];
    printf("Enter the size of graph\n");
    scanf("%d",&size);
    printf("Enter the adjcency matrix\n");
    for (int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    warshal(arr,size);
}
