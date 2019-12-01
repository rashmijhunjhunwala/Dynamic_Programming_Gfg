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
	    int ls[n];
	    int rs[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        ls[i]=1;
	        rs[i]=1;
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[i]>a[j])
	            ls[i]=max(ls[i],ls[j]+1);
	        }
	    }
	    for(int i=n-2;i>=0;i--)
	    {
	        for(int j=n-1;j>i;j--)
	        {
	            if(a[i]>a[j])
	            rs[i]=max(rs[i],rs[j]+1);
	        }
	    }
	    int max=ls[0]+rs[0]-1;
	    for(int i=1;i<n;i++)
	    {
	        if(max<ls[i]+rs[i]-1)
	            max=ls[i]+rs[i]-1;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
