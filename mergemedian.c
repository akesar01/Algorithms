#include<stdio.h>
float median(int a[],int size1,int b[],int size2)
{
int c[30];
int i=0;
int j=0;
int k=0;
while(i<size1 && j <size2)
{
    if(a[i]<b[j])
    {
        c[k]=a[i];
        i++;
        k += 1;
    }
    else
    {
        c[k]=b[j];
        j++;
        k++;    
    }
}
while(i<size1)
{
    c[k]=a[i];
    k +=1;
    i++;
}
while(j<size2)
{
    c[k]=b[j];
    k +=1;
    j++;
}
int t_size=size1 + size2;
printf("The merged array is:\n");
for(int l=0;l<t_size;l++)
{
    printf("%d ",c[l]);
}
if(t_size%2==1)
{
    return c[t_size/2];
}
else
{
    int n=t_size/2;
    float res=((c[n]+c[n-1])/2.0);
    return res;
}

}
void main()
{
    int a[10];
    int b[10];
    int size1,size2;
    printf("enter the size of first array\n");
    scanf("%d",&size1);
    printf("Enter 1st sorted array\n");
    for(int i=0;i<size1;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter the size of second array\n");
    scanf("%d",&size2);
    printf("Enter the second array\n");
    for(int j=0;j<size2;j++)
    {
        scanf("%d",&b[j]);
    }
    float c =median(a,size1,b,size2);
    printf("The median is\n");
    printf("%.2f",c);
}
