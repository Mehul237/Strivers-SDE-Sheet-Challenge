
#include<bits/stdc++.h>

string longestCommonPrefix(vector<string> &arr, int n) {

    int m = INT_MAX;
    string k = "";

    for (int i=0; i<n; i++) {
        if (arr[i].size() < m) {
            m = arr[i].size();
            k = arr[i];
        }
    }

    string ans = "";
    int j = 0;
    
    while (j < m) {
        for (int i=0; i<n; i++) {
            if (arr[i].at(j) != k.at(j)) {
                return ans;
            }
        }
        ans += k.at(j);
        j++;
    }
    return ans;
}
