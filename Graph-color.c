#include<stdio.h>
#include<stdlib.h>
void printsol(int color[],int n){
    for(int i=0;i<n;i++)
    printf("%d ",color[i]);
    printf("\n");

}
int issafe(int v,int arr[][4],int color[],int c)
{
    for(int i=0;i<4;i++){
        if(arr[v][i] && color[i]==c)
        {
            return 0;
        }
    }
    return 1;

}
int coloruntil(int arr[][4],int m,int color[],int v)
{
    if(4==v)
    return 1;
    for(int i=1;i<=m; i++){

    if(issafe(v,arr,color,i)){
        color[v]=i;
        if(coloruntil(arr,m,color,v+1)){

            return 1;
        }
        color[v]=0;



    }
    }
return 0;
    

} 
void graphcoloring(int arr[][4],int m,int size){
    int * color =(int *)malloc(size * sizeof(int));
    for (int i =0;i<size;++i)
    color[i] =0;
    if(coloruntil(arr,m,color,0)==0){
    printf("Solution does not exist");
    return ;
    }
    printsol(color,size);
    return ;


}
void main(){
    int arr[4][4]={{0,1,1,1},{1,0,1,0},{1,1,0,1},{1,0,1,0}};
    int m=3;
    graphcoloring(arr,m,4);

 }
