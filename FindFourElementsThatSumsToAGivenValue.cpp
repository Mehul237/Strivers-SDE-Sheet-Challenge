#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {

    sort(arr.begin(), arr.end());
    if(arr.size() < 4) return "No";

    bool flag = false;;

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i+1; j < arr.size(); j++) {

            long long target_2 = target - arr[i];
            target_2 -= arr[j];

            int k = j+1;
            int l = arr.size()-1;

            while(k < l) {
                int two_sum = arr[k] + arr[l];
                if(two_sum > target_2){
                    l--;
                } 
                
                else if(two_sum < target_2) {
                    k++;   
                }
                
                else {
                    flag = true;
                    break;
                }
            }
        }
    }
    return flag ? "Yes" : "No";
}
