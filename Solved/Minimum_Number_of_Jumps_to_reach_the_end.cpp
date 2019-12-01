#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n],minimum_jump[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        minimum_jump[i]=INT_MAX;
	    }
	    
	    minimum_jump[0]=0;
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	          if(j+arr[j]>=i)
	          {
	          minimum_jump[i]=min(minimum_jump[i],minimum_jump[j]+1);    
	          }
	        }
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(minimum_jump[i]==INT_MAX)
	        minimum_jump[i]=-1;
	    }
	    if(minimum_jump[n-1]>0)
	    cout<<minimum_jump[n-1]<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
