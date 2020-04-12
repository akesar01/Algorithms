#include<stdio.h>
#include<string.h>
int maxlen(char str[])
{   int len;
    len =strlen(str);
    int a[20][20];
    for(int i =0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i==j)
            a[i][j]=1;
            else
            {
                a[i][j]=0;
            }
            
        }

    }


    int l = 1;
	while(l <= len-1)
	{
		int i = 0;
		while(i+l <=len-1)
		{
			int j = i+l;
			if(str[i] == str[j])
				a[i][j] = a[i+1][j-1] + 2;
			else
			{
				if(a[i+1][j] > a[i][j-1])
					a[i][j] = a[i+1][j];
				else
					 a[i][j] = a[i][j-1];
			}
			
			i = i + 1;
		}
		
		l = l + 1;
	}
    return a[0][len-1];
}



void main()
{
    char str[20];
    printf("Enter the string");
    gets(str);
    int a=maxlen(str);
    printf("The length is %d",a);
}
