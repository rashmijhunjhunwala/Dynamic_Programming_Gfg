
#include<bits/stdc++.h>
using namespace std;
#define pp long long int
#define mod 1000000007
pp binomial(pp n, pp k)
{
    pp arr[n+1][k+1];
    for(pp i=1;i<=n;i++)
    {
        for(pp j=0;j<=min(i,k);j++)
        {
            if(j==0 or j==i) arr[i][j]=1;
            else arr[i][j] = ( (arr[i-1][j-1]%mod) + (arr[i-1][j]%mod) )%mod;
        }
    }
    return arr[n][k];
}
int main()
{
  pp t; cin>>t;
    while(t--)
    {
        pp n,k; cin>>n>>k;
        if(n>=k)
        {
        pp ans = binomial(n,k);
        cout<<ans<<'\n';
        }
        else cout<<"0\n";
    }
    return 0;
}
