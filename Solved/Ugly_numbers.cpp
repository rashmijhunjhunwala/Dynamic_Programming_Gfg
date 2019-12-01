#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int tc; cin>>tc;
    while(tc--){
        long long int  n; cin>>n;
        long long int  ugly[n];
        ugly[0]=1;
        long long int  i2=0, i3=0, i5=0;
        long long int  nm2=ugly[i2]*2, nm3=ugly[i3]*3, nm5=ugly[i5]*5;
        long long int  nm=1;
        for( int i=1; i<n; i++){
            nm = min(nm2, min(nm3, nm5));
            ugly[i] = nm;
            if(nm == nm2){
                i2++;
                nm2 = ugly[i2]*2;
            }
            if(nm==nm3){
                i3++;
                nm3 = ugly[i3]*3;
            }
            if(nm==nm5){
                i5++;
                nm5 = ugly[i5]*5;
            }
        }
        cout<<nm<<"\n";
    }
}

