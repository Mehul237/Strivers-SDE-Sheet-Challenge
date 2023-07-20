
#include <bits/stdc++.h>

bool solve(int ind, int n, vector<int> &arr, int sum, vector<vector<int>> &dp) {

    if(sum == 0) return true;
    if(ind >= n) return false;
    if(sum < 0) return false;

    if(dp[ind][sum] != -1) return dp[ind][sum];
    bool take = solve(ind+1, n, arr, sum-arr[ind], dp);
    bool nottake = solve(ind+1, n, arr, sum, dp);
    return dp[ind][sum] = (take or nottake);
}

    bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n, vector<int> (k+1, -1));
    return solve(0, n, arr, k, dp);
}
