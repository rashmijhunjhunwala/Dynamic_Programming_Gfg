#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int dp[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=1;
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[i]>a[j])
	            {
	                dp[i]=max(dp[i],dp[j]+1);
	            }
	        }
	    }
	    int max=dp[0];
	    for(int i=1;i<n;i++)
	    {
	        if(dp[i]>max)
	        {
	            max=dp[i];
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
