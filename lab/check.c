#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n,u,d;
    int myindex=0;
    int leastvalue=0;
    int luckychoice=0;
    printf("Enter the n ,u,d\n");
    scanf("%d %d %d",&n,&u,&d);
    int * array =(int *)malloc(n* sizeof(int));
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    leastvalue=array[0];
    for(int i=1;i<n;i++)
    {
        if(array[i]<=leastvalue)
        {
            if(leastvalue-array[i]<=d)
            {
                leastvalue=array[i];
                myindex=i;
            }
            else
            {
                if(luckychoice==0)
                {
                    leastvalue=array[i];
                    myindex=i;
                    luckychoice=luckychoice+1;
                }
                else
                {
                    break;
                }
            }
            
        }
        else if(array[i]>leastvalue)
        {
            if(array[i]-leastvalue<=u)
            {
                leastvalue=array[i];
                myindex=i;
            }
            else
            {
                if(luckychoice==0)
                {
                    leastvalue=array[i];
                    myindex=i;
                    luckychoice=luckychoice+1;
                }
                else
                {
                    break;
                }
            }
            
        }
    }
    myindex=myindex+1;
    printf("\nResult is %d",myindex);
}