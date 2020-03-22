#include<stdio.h>
void bfs(int arr[20][20],int start,int size,int *visited)
{   int i=0;
    int queue[200];
    int front=-1;
    int rear=-1;
    queue[++rear]=start;
    visited[start]=1;

        
    while(front !=rear)
    {
        start=queue[++front];
        printf("%d\t",start+1);
    for(int i=0;i<size;i++)
    {
        if(visited[i]==0 && arr[start][i]==1)
        {
            visited[i]=1;
            rear++;
            queue[rear]=i;
        }
    }
}
}
int main()
{
    int visited[20];
    int size,start;
    int arr[20][20];
    printf("Enter the size of tree\n");
    scanf("%d",&size);
    printf("enter the starting node");
    scanf("%d",&start);
    printf("Enter the matrix");
    for (int j=0;j<size;j++)
    {
        for (int k=0;k<size;k++)
        {
            scanf("%d",&arr[j][k]);
        }
    }
    for(int l=0;l<size;++l)
    {
        visited[l]=0;
    }
    bfs(arr,start-1,size,visited);
    return 0;
}