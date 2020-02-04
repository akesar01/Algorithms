#include<stdio.h>
#include<stdlib.h>
int c[100];
int top=-1;
void push(int a)
{
c[++top]=a;
}
void display()
{
for (int i=0;i<=top;i++)
{
printf("%d",c[top]);
}
}


void main()
{
int a[100];
int n,k,l,t,j,i;
printf("Enter the no of Test cases\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the size and key element");
scanf("%d%d",&k,&l);
for(t=0;t<k;t++)
{
scanf("%d",&a[t]);
}
if((l>a[t-1]) || (l<a[0]))
{
push(-1);
}
else
{
for (j=0;j<k;j++)
{
if (a[j]==l)
{
push(1);
break; 
}
else
{
push(-1);
break;
}
}
}
}
display();
}



