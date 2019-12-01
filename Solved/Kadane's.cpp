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
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   int curr=a[0];
	   int so_far=a[0];
	   for(int i=1;i<n;i++)
	   {
	       curr=max(a[i],curr+a[i]);
	       so_far=max(so_far,curr);
	   }
	   cout<<so_far<<endl;
	}
	return 0;
}
