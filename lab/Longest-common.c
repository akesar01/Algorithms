/* Finding longes commom subsequence






*/
#include<stdio.h>
#include<string.h>
int lcs(char s1[],char s2[],int i1,int i2){
    int c=0;

    if(i1==strlen(s1)|| i2 ==strlen(s2))
    return 0;
    
    if(s1[i1]==s2[i2])
     c = 1+ lcs(s1,s2,i1+1,i1+1);


    int a= lcs(s1,s2,i1,i2+1);
    int b =lcs(s1,s2,i1+1,i2);

    int max1 = (a>b)?a:b;
    int max = (c>max1)?c:max1;

    return max;


}

void main(){

    char s1[]={'c','a','t','c','h','\0'};
    char s2[]={'c','a','r','c','h','\0'};

    int c=lcs(s1,s2,0,0);
    printf("The counted ways are %d",c);

}
