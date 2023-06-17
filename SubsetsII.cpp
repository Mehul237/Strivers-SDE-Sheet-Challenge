#include <bits/stdc++.h> 
using namespace std;

void findSubset(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans) {

    ans.push_back(ds);

    for(int i=ind; i<nums.size(); i++) {

        if(i != ind && nums[i] == nums[i-1]) {
            continue;
        }

        ds.push_back(nums[i]);
        findSubset(i+1, nums, ds, ans);
        ds.pop_back();
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr) {

    vector<vector<int>> ans;
    vector<int> ds;
    
    sort(arr.begin(), arr.end());
    findSubset(0, arr, ds, ans);
    return ans;
}
