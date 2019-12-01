
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    a[1]=a[2]=1;
	    for(int i=3;i<=n;i++)
	    {
	        a[i]=(a[i-1]+a[i-2])%1000000007;
	    }
	    cout<<a[n]<<endl;
	}
	return 0;
}
