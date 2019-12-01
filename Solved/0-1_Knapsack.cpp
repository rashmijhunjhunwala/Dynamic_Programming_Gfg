#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int max_cap;
	    cin>>max_cap;
	    int val[n];
	    int wt[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>val[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>wt[i];
	    }
	    int dp[n+1][max_cap+1];
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=max_cap;j++)
	        {
	            if(i==0 || j==0)
	                dp[i][j]=0;
	           else if(j<wt[i-1])
	                dp[i][j]=dp[i-1][j];
	           else
	                dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
	        }
	    }
	    cout<<dp[n][max_cap]<<endl;
	}
	return 0;
}
