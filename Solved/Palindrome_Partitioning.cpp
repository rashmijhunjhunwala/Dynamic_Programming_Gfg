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
	    int n=s.length();
	    bool dp[n][n];
	    int c[n];
	    for(int i=0;i<n;i++)
	    {
	        dp[i][i]=true;
	    }
	    for(int l=2;l<=n;l++)
	    {
	        for(int i=0;i<n-l+1;i++)
	        {
	            int j=i+l-1;
	            if(l==2)
	                dp[i][j]=(s[i]==s[j]);
	           else
	                dp[i][j]=(s[i]==s[j] && dp[i+1][j-1]);
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(dp[0][i]==true)
	            c[i]=0;
	       else
	       {
	           c[i]=INT_MAX;
	           for(int j=0;j<i;j++)
	           {
	               if(dp[j+1][i] && 1 + c[j] < c[i])
	                    c[i]=1+c[j];
	           }
	       }
	    }
	    cout<<c[n-1]<<endl;
	}
	
	return 0;
}
