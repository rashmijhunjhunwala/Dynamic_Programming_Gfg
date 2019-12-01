#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[3];
	    for(int i=0;i<3;i++)
	    {
	        cin>>arr[i];
	    }
	    int dp[4][n+1];
	    for(int i=0;i<n+1;i++)
	    {
	        dp[0][i]=-1;
	    }
	    for(int i=1;i<4;i++)
	    {
	        dp[i][0]=0;
	    }
	    sort(arr,arr+3);
	    for(int i=1;i<4;i++)
	    {
	        for(int j=1;j<n+1;j++)
	        {
	            if(j<arr[i-1])
	                dp[i][j]=dp[i-1][j];
	           else
	           {
	               if(dp[i-1][j]==-1 && dp[i][j-arr[i-1]]==-1)
	                    dp[i][j]=-1;
	               else
	                    dp[i][j]=max(dp[i][j-arr[i-1]]+1,dp[i-1][j]);
	           }
	        }
	    }
	    cout<<dp[3][n]<<endl;
	}
	return 0;
}
