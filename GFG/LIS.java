//https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence/0



//Java Code

package com.example.myPackage;

import java.util.Scanner;
/*
Let arr[0..n-1] be the input array and 
dp[i] be the length of the longest increasing subsequence  ending at index i such that arr[i] 
is the last element of the subsequence.

Then, dp[i] can be recursively written as:
dp[i] = 1 + max(dp[j]) where 0 < j < i and 
       [arr[j] < arr[i]  ]
dp[i] = 1, if no such j exists.

To find the result for a given array, we need 
to return max(dp[i]) where 0 < i < n.

*/

public class Main {
    private static Scanner s = new Scanner(System.in);
    public static void main(String[] args) {
	// write your code here

        int t = s.nextInt();//Taking the test cases;
        while(t-->0)
        {
            int n = s.nextInt();  // Taking the size of the array
            int arr[] = new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i] = s.nextInt();
            }
            int dp[] = new int[n];   // New temp array to store the size of the array;
            for(int i=0;i<n;i++)
            {
                dp[i] = 1;
            }

            for(int i =1;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    if(arr[j]<arr[i])
                        dp[i] = Math.max(dp[i],dp[j]+1);     // if the the jth element is smaller than the i th elment Take the max of dp[i] and d[j] +1;
                }
            }

            int max=dp[0];
            for(int i=0;i<n;i++)
            {
                if(max<dp[i])
                    max = dp[i];
            }
            System.out.println(max);
        }

    }
}
