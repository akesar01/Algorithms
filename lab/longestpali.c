/* longest palidromic subsequence
in an sequence
Test Case:
Example1:
input : "ELPMENMET"
output : 5
LPS "EMEME"
*/
// Take two pointer 
#include<stdio.h>
#include<string.h>
int max(int a,int b,int c ){


    int temp =(a>b)?a:b;
    int max1 =(temp>c)?temp:c;
    return max1;
}
int lps(char s[],int start,int end){

    int count1=0;
    if(start >end)
    return 0;
    if (start==end)
    return 1;

    if(s[start]==s[end])
     count1 =2+ lps(s,start+1,end-1);

    int count2 = lps(s,start+1,end);
    int count3 =lps(s,start,end-1);
    return max(count1,count2,count3);



}
void main()
{
    char name[20];

    printf("Enter the string \n");
    fgets(name,sizeof(name),stdin);
    int max2 =lps(name,0,strlen(name)-1);
    printf("The max length of palindrome is %d",max2);
    
}