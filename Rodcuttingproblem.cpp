
int solve(int ind, vector<int> price, int n, vector<vector<int>>& dp) {
    if(ind == 0) return n*price[0];
    if(dp[ind][n]!=-1) return dp[ind][n];
    int not_take = 0 + solve(ind-1, price, n, dp);
    int rodLength = ind + 1;
    int take = INT_MIN;

    if(rodLength <= n) {
        take=price[ind] + solve(ind, price, n-rodLength, dp);
    }
    return dp[ind][n] = max(not_take, take);
}


int cutRod(vector<int> &price, int n) {
    int size = price.size();
    vector<vector<int>> dp(size, vector<int> (n+1,-1));
    return solve(n-1, price, n, dp);
}
