#include<stdio.h>
int visited[100];
int count=0;
void dfs(int arr[20][20],int start,int size)
{

    visited[start]= 1;
    printf("%d  ",start);
    count++;
    for(int i=0;i<size;++i)
    {
        if(arr[start][i]== 1 && visited[i]== 0)
        {
            dfs(arr,i,size);
        }
    }

}
void main()
{
    int a[20][20];
    int size,start;
    printf("Enter the no of nodes\n");
    scanf("%d",&size);
    printf("Enter the starting node");
    scanf("%d",&start);
    for(int l=0;l<size+1;++l)
    {
        visited[l] = 0;
    }
    printf("Elements of adjcency matrix\n");
    for(int j=0;j<size;++j)
    {
        for(int k=0;k<size;++k)
        {
            
            scanf("%d",&a[j][k]);
        }
    }
    dfs(a,start,size);
    if(count==size)
    {
        printf("connected");
    }
    else
        printf("Notconnected");
}
