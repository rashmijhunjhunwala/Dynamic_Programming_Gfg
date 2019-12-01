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
	    int s[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    int to;
	    cin>>to;
	    int dp[to+1][n];
	    for(int i=0;i<n;i++)
	    {
	        dp[0][i]=1;
	    }
	    for(int i=1;i<to+1;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            int x=(i-s[j]>=0)?dp[i-s[j]][j]:0;
	            int y=(j>=1)?dp[i][j-1]:0;
	            dp[i][j]=x+y;
	        }
	    }
	    cout<<dp[to][n-1]<<endl;
	}
	return 0;
}
