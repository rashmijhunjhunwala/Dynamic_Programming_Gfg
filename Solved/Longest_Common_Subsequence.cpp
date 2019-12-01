#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    string s1;
	    string s2;
	    cin>>s1>>s2;
	    int dp[a+1][b+1];
	    for(int i=0;i<b+1;i++)
	    {
	        dp[0][i]=0;
	    }
	    for(int i=0;i<a+1;i++)
	    {
	        dp[i][0]=0;
	    }
	    for(int i=1;i<a+1;i++)
	    {
	        for(int j=1;j<b+1;j++)
	        {
	            if(s1[i-1]==s2[j-1])
	            {
	                dp[i][j]=dp[i-1][j-1]+1;
	            }
	            else
	            {
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            }
	        }
	    }
	    cout<<dp[a][b]<<endl;
	}
	return 0;
}
