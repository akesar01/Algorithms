#include<stdio.h>
#include<stdlib.h>
int gcd(int,int);
void main()
{
int a,b,re;
printf("Enter the two number\n");
scanf("%d%d",&a,&b);
re=gcd(a,b);
printf("GCD IS %d",re);
}
int gcd(int x,int y)
{
int rem;
int n;

if (x==0)
{
return y;
}
if (y==0)
{
return x;
}
else
{
rem=x%y;
gcd(y,rem);
}
}
