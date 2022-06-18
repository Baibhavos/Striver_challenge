#include <bits/stdc++.h>
int dfs(vector<vector<int>>& dp, int i, int j)
{
    if(i>=dp.size() || j>=dp[0].size())
        return 0;
    
    if(i==dp.size()-1 && j==dp[0].size()-1)
        return 1;
    
    if(dp[i][j])
        return dp[i][j];
    
    return dp[i][j] = dfs(dp,i+1,j) + dfs(dp,i,j+1);
}

int uniquePaths(int m, int n) {
	// Write your code here.
    //    Method - 1(Recursion)
//     if(m==1 || n==1)
//         return 1;
    
//     return uniquePaths(m-1,n) + uniquePaths(m,n-1);
    
    //    Method - 2(Memozation)
    vector<vector<int>> dp(m,vector<int>(n));
    
    return dfs(dp,0,0);
}
