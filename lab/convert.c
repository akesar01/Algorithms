/*we are given string s1 and s2
we need to convert s2 into s1 by deleting,inserting,or  replaceing
characters
Write the function to count the minimum no of edit operationsd
example1
s1="catch"
s2="carch"
output =1

*/
#include<stdio.h>
#include<string.h>
int min(int a,int b,int c)
{
    int min1 =(a>b)?b:a;
    int min2 =(c>min1)?min1:c;
    return min2;
}
int count(char s1[],char s2[],int i1,int i2)
{
    if(i1 ==strlen(s1))
    return (strlen(s2)-i2);
    if(i2==strlen(s2))
    return strlen(s1)-i1;
    if (s1[i1]==s2[i2])
    return count(s1,s2,i1+1,i2+1);





    int a = 1+count(s1,s2,i1+1,i2);//perform insertion
    int b = 1+count(s1,s2,i1,i2+1);//perform deletion
    int c = 1+count(s1,s2,i1+1,i2+1);//perform replacement

    return min(a,b,c);


}
void main(){
    char s1[]={'x','b','b','a','c','d','\0'};
    char s2[]={'a','b','b','c','\0'};

    int c=count(s1,s2,0,0);
    printf("The counted ways are %d",c);

}