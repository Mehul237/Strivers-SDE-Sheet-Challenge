
#include <bits/stdc++.h>

bool wordBreak(vector<string> &arr, int n, string &target) {

  n = target.size();

  vector<int> dp(n + 1, 0);

  dp[n] = 1;
  for (int i=n-1; i>=0; i--) {
    for (auto word : arr) {
      if (i + word.size() <= n and target.substr(i, word.size()) == word and
          dp[i + word.size()])
        dp[i] = true;
    }
  }
  return dp[0];
}
