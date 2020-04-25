//given the n we have find no of ways in which it can be represented into sum of 1 3 4
/* example 
n=4
no of ways =4
possible pair {4},{3,1},{1,1,1,1},{1,3}
*/
#include<stdio.h>
int ways(int n)
{
    if(n==0|| n==1|| n==2)
    return 1;
    if(n==3)
    return 2;

    int a =ways(n-1);
    int b =ways(n-3);
    int c =ways(n-4);

    return a+b+c;
}
void main()
{
    int a,b;
    printf("Enter the number\n");
    scanf("%d",&a);
    b=ways(a);
    printf("The number of ways are%d",b);
}