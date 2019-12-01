#include<bits/stdc++.h> 
using namespace std;
  
// Driver Program 
int main() 
{ 
  int t;
  cin>>t;
  while(t--)
  {
      int R,C;
      cin>>R>>C;
      int points[R][C];
      for(int i=0;i<R;i++)
      {
          for(int j=0;j<C;j++)
          {
              cin>>points[i][j];
          }
      }
      int dp[R][C]; 
      int m = R, n = C; 
  
    // Base case 
    dp[m-1][n-1] = points[m-1][n-1] > 0? 1: 
                   abs(points[m-1][n-1]) + 1; 
  
    // Fill last row and last column as base to fill 
    // entire table 
    for (int i = m-2; i >= 0; i--) 
         dp[i][n-1] = max(dp[i+1][n-1] - points[i][n-1], 1); 
    for (int j = n-2; j >= 0; j--) 
         dp[m-1][j] = max(dp[m-1][j+1] - points[m-1][j], 1); 
  
    // fill the table in bottom-up fashion 
    for (int i=m-2; i>=0; i--) 
    { 
        for (int j=n-2; j>=0; j--) 
        { 
            int min_points_on_exit = min(dp[i+1][j], dp[i][j+1]); 
            dp[i][j] = max(min_points_on_exit - points[i][j], 1); 
        } 
     } 
  
      cout<<dp[0][0]<<endl;
  }
    return 0; 
} 
