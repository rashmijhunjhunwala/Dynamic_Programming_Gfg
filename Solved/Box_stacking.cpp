#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxHeight(int height[],int width[],int length[],int n);

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	

 	int A[1000],B[1000],C[10001];
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		A[i]=a;
		B[i]=b;
		C[i]=c;
	}
	cout<<maxHeight(A,B,C,n)<<endl;
}
 
} /*This is a function problem.You only need to complete the function given below*/
/*The function takes an array of heights, width and 
length as its 3 arguments where each index i value 
determines the height, width, length of the ith box. 
Here n is the total no of boxes.*/
typedef tuple<int,int,int> t3i;
bool baseArea_comp(t3i &a,t3i &b){
    return get<0>(a)*get<1>(a) > get<0>(b)*get<1>(b);
}
int maxHeight(int height[],int width[],int length[],int n)
{
    //Your code here
    vector<tuple<int,int,int>> v;
    for(int i=0;i<n;i++)
    {
        if(length[i] > width[i])
            v.push_back(make_tuple(length[i],width[i],height[i]));
        else
            v.push_back(make_tuple(width[i],length[i],height[i]));
        if(width[i] > height[i])
            v.push_back(make_tuple(width[i],height[i],length[i]));
        else
            v.push_back(make_tuple(height[i],width[i],length[i]));
        if(height[i] > length[i])
            v.push_back(make_tuple(height[i],length[i],width[i]));
        else
            v.push_back(make_tuple(length[i],height[i],width[i]));
    }
    sort(v.begin(),v.end(),baseArea_comp);
    vector<int> ht;
    int H=0;
    for(int i=0;i<3*n;i++)
        ht.push_back(get<2>(v[i]));
    for(int i=0;i<3*n;i++)
    {
        for(int j=0;j<i;j++)
        {
      if(get<0>(v[i]) < get<0>(v[j]) && get<1>(v[i]) < get<1>(v[j])
                             &&  ht[j] + get<2>(v[i]) > ht[i])
            {
                ht[i] = ht[j] + get<2>(v[i]);
                    H = max(H,ht[i]);
            }
        }
    }
    return H;
}
