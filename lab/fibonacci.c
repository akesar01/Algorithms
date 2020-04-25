#include<stdio.h>
int fib(int n){


    if(n==0 || n==1)
    return n;
    else{
        return fib(n-1)+fib(n-2);
    }
}
void main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int b=fib(a);
    printf("The Result is %d",b);
}