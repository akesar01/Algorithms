/* there are n houses build in a line ,each of which contains some value init
A theif is going to steal the maximium value,But he cannot steal in two adjcent houses 
what is the maximun value

Example 1:
input :{5,7,1,30,8,2,4}
output:
Theif will steal from {7,30,4}

*/
#include<stdio.h>
int maxmoney(int house[],int current,int len){
    if(current >=len)
    return 0;

    int first = house[current] + maxmoney(house,current +2,len);
    int skip = maxmoney(house,current+1,len);

    int max= (first>skip)?first:skip;


    return max;




}
void main(){

    int a;
    int arr[20];
    printf("enter the no of houses\n");
    scanf("%d",&a);
    printf("Enter the cost inside the house\n");
    for (int i =0;i<a;i++)
    {
    scanf("%d",&arr[i]);
    }
    int money =maxmoney(arr,0,a);
    printf("The max money he can steal is %d",money);


    
}