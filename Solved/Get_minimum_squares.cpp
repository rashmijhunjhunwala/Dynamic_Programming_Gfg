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
	    int dp[n+1];
	    dp[0]=0;
	    dp[1]=1;
	    dp[2]=2;
	    dp[3]=3;
	    for(int i=4;i<=n;i++)
	    {
	        dp[i]=i;
	        for(int j=1;j<=ceil(sqrt(i));j++)
	        {
	            int temp=j*j;
	            if(temp>i)
	                break;
	           else
	            dp[i]=min(dp[i],dp[i-temp]+1);
	        }
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
