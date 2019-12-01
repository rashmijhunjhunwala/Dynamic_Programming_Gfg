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
	    int start=0;
	    int maxlen=1;
	    int x=1;
	    for(int i=0;i<n;i++)
	    {
	        dp[i][i]=true;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            dp[i][i+1]=true;
	            x=2;
	            if(x>maxlen)
	            {
	            maxlen=2;
	            start=i;
	            }
	        }
	        else
	        {
	            dp[i][i+1]=false;
	        }
	    }
	    for(int l=3;l<=n;l++)
	    {
	        for(int i=0;i<n-l+1;i++)
	        {
	            int j=i+l-1;
	            if(dp[i+1][j-1] && s[i]==s[j])
	            {
	                dp[i][j]=true;
	                x=l;
	                if(x>maxlen)
	                {
	                maxlen=l;
	                start=i;
	                }
	            }
	            else
	            {
	                dp[i][j]=false;
	            }
	            
	        }
	    }
	    for(int i=start;i<start+maxlen;i++)
	    {
	        cout<<s[i];
	    }
	    cout<<endl;
	}
	return 0;
}
