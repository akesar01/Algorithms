#include<stdio.h>
#include<stdlib.h>

/*checks whether the given index is out of the array. Out of array is considered as 0 */

int isSafe(int N,int M,int i,int j)
{
    if(i < 0 || i >= N)
        return 0;
    if(j < 0 || j >= M)
        return 0;
    return 1;
}
/* this function does the DFS for every new one 1 found and assign every connected one to zero */
void delIsland(int **A,int N,int M,int i,int j)
{
    if(isSafe(N,M,i,j) && A[i][j] == 1)
    {
        A[i][j] = 0;
        delIsland(A, N , M , i-1, j-1);
        delIsland(A, N, M, i-1, j);
        delIsland(A, N, M, i-1, j+1);
        delIsland(A, N, M, i, j-1);
        delIsland(A, N, M, i, j+1);
        delIsland(A, N, M, i+1, j-1);
        delIsland(A, N, M, i+1, j);
        delIsland(A, N, M, i+1, j+1);
    }
}

/* this function finds the total number of islands and return count – 1 as total number of bridges */
int TotalBridge(int **A, int N, int M)
{
    int count = 0 ;
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            if(A[i][j] == 1)
            {
                count++;
                delIsland(A,N,M,i,j);
            }
    }
    if(count == 0)
        return 0;
    return count;
}

/* get the input and calls the function */
int main()
{
    int N,M;
    int i,j;
    printf("Enter the order of the islands : \n");
    scanf("%d %d", &N,&M);
    int **A = (int **)malloc(N * sizeof(int *));
    for (i = 0; i < N; i++)
        A[i] = (int *)malloc(M * sizeof(int));
    printf("Enter the island matrix : ");
    for(i = 0; i < N ; i++)
        for(j = 0; j < M; j++)
            scanf("%d",&A[i][j]);
    printf("Total Number of islands : %d", TotalBridge(A,N,M));
    return 0;
}