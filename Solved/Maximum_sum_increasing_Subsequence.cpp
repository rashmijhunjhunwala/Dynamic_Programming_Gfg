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
	    int a[n];
	    int res[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        res[i]=a[i];
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[i]>a[j])
	            {
	                res[i]=max(res[i],a[i]+res[j]);
	            }
	        }
	    }
	    int max=res[0];
	    for(int i=1;i<n;i++)
	    {
	        if(res[i]>max)
	        max=res[i];
	    }
	    cout<<max<<endl;
	}
	return 0;
}
