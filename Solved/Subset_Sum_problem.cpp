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
	    int sum=0;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	   for(int i=0;i<n;i++)
	        sum+=arr[i];
	   if(sum%2!=0)
	    cout<<"NO"<<endl;
	   else
	   {
	       sum=sum/2;
	       bool dp[n+1][sum+1];
	       for(int i=0;i<n+1;i++)
	       {
	           dp[i][0]=true;
	       }
	       for(int i=1;i<sum+1;i++)
	       {
	           dp[0][i]=false;
	       }
	       for(int i=1;i<n+1;i++)
	       {
	           for(int j=1;j<sum+1;j++)
	           {
	               if(arr[i-1]>j)
	                    dp[i][j]=dp[i-1][j];
	               else
	                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
	           }
	       }
	       //for(int i=0;i<n+1;i++)
	       //{
	       //    for(int j=0;j<sum+1;j++)
	       //    {
	       //        cout<<dp[i][j]<<" ";
	       //    }
	       //    cout<<endl;
	       //}
	       if(dp[n][sum]==true)
	        cout<<"YES"<<endl;
	       else
	        cout<<"NO"<<endl;
	   }
	}
	return 0;
}
