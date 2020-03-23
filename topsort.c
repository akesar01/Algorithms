// Topological Sorting 
#include<stdio.h>
int arr[20][20];
int size;
int queue[30];
int front=-1;
int rear=-1;
int find_in(int node)
{
    int in_deg=0;
    for(int j=1;j<=size;j++)
    {
        if(arr[j][node]== 1)
        {
            in_deg++;
        }    
    }
    return in_deg;
}
void insert_queue(int i)
{
    if(rear==19)
    {
        printf("\n overflow");
    }
    else
    {
        if(front== -1)
        {
            front=0;
        }
        queue[++rear]=i;
    }
    
}
int del_que(){
    int del;
    if(front==-1 || front>rear){
        printf("underflow");
    }
    else{
    del=queue[front++];
    return del;
    }

}
void main()
{   
    int j=0;
    int del_node;
    int indeg[20];
    int topsort[20];
    printf("enter the size of graph\n");
    scanf("%d",&size);
    printf("Enter the adjacency matrix");
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=1;k<=size;k++)
    {
        indeg[k]=find_in(k);
        /* Checking indegree of each node*/
        if(indeg[k]==0)
        {
            insert_queue(k);
        }
    }
    /* deleting the nodes*/
while(front <=rear)
{
        del_node=del_que();
        topsort[j]=del_node;
        j++;

        for(int l=1;l<=size;l++)
        {
            if(arr[del_node][l]==1)
            {
                arr[del_node][l]=0;
                indeg[l]=indeg[l]-1;
                if(indeg[l]==0)
                {
                    insert_queue(l);
                }
            }
        }
}
    printf("Topological sorting:");
    for(int m=0;m<j;m++)
    {
        printf("%d ",topsort[m]);
    }
}