#include <bits/stdc++.h> 

int solve(int n,int m,vector<vector<int>>&dp) {
    if(n==0 || m==0) return 1;
    if(dp[n][m]!=-1) return dp[n][m];
    return dp[n][m] = solve(n-1,m,dp)+solve(n,m-1,dp);
}

int tab(int n,int m) {
   vector<vector<int>>dp(n,vector<int>(m,0));

   for(int i=0;i<n;i++)
       for(int j =0;j<m;j++)
            if(i==0 || j==0)
               dp[i][j] =1;
            else
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
    return dp[n-1][m-1];
}

int SO(int n,int m) {

    vector<int> prev(m,0);
    vector<int> curr(m,0);

    for(int i=0;i<m;i++) prev[i] = 1;

    for(int i=1;i<n;i++) {
        for(int j =0;j<m;j++)
            if(j==0)
               curr[j] = 1;
            else
                curr[j] = curr[j-1]+prev[j];
        prev = curr;
    }
    return prev[m-1];
}

int uniquePaths(int m, int n) {

    vector<vector<int>>dp(m,vector<int>(n,-1));
    return solve(m-1,n-1,dp);
}
