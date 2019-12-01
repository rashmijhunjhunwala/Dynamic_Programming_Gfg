#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int maxlen=0;
	    int n=s.length();
	    int dp[n][n];
	    for(int i=0;i<n;i++)
	    {
	        dp[i][i]=s[i]-'0';
	    }
	    for(int len=2;len<=n;len++)
	    {
	        for(int i=0;i<n-len+1;i++)
	        {
	            int j=i+len-1;
	            int k=len/2;
	            dp[i][j]=dp[i][j-k]+dp[j-k+1][j];
	            if(len%2==0 && dp[i][j-k]==dp[j-k+1][j] && len>maxlen)
	                maxlen=len;
	            
	        }
	    }
	   cout<<maxlen<<endl; 
	}
	return 0;
}
