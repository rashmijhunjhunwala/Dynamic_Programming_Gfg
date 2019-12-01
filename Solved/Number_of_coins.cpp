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
	    int val;
	    cin>>val>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   int dp[val+1];
	   dp[0]=0;
	   for(int i=1;i<=val;i++)
	   {
	       dp[i]=INT_MAX;
	   }
	   for(int i=0;i<n;i++)
	   {
	       for(int j=1;j<=val;j++)
	       {
	           if(j>=a[i])
	           {
	               if(dp[j-a[i]]+1<dp[j] && dp[j-a[i]]!=INT_MAX)
	                dp[j]=dp[j-a[i]]+1;
	           }
	       }
	   }
	   if(dp[val]==INT_MAX)
	    cout<<-1<<endl;
	   else
	    cout<<dp[val]<<endl;
	}
	return 0;
}
