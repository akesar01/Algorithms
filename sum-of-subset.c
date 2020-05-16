#include<stdio.h>
#include<stdlib.h>
int flag = 1;
void printArray(int * a,int n){
    flag =0;

    for(int i =0;i<n;++i){
        printf("%d ",a[i]);
    }
    printf("\n"); 
}
void subsetsum(int *set,int * subset,int n,int subsize,int total,int nodecount,int sum){
    if(total>sum){
        return ;
    }
   if( total == sum) 
   {
      printArray(subset, subsize);     //print the subset
      subsetsum(set,subset,n,subsize-1,total-set[nodecount],nodecount+1,sum);     //for other subsets
      
   }
   else {
      for( int i = nodecount; i < n; i++ ) {     //find node along breadth
         subset[subsize] = set[i];
         subsetsum(set,subset,n,subsize+1,total+set[i],i+1,sum);     //do for next node in depth
      }
   }
}
void findsubset(int* set,int size,int sum)
{
    int * subset = (int *) malloc(size * sizeof(int));
    subsetsum(set,subset,size,0,0,0,sum);

}

int main(){
    int weights[] ={10,7,5,18,12,20,15};
    int size =7;
    findsubset(weights,size,2);
    if(flag)
    printf("The subset not found");
}
