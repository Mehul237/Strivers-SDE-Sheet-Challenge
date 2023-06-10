#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x) {
 
    int n=arr.size();
    // sort(arr.begin(),arr.end());
    int cur;
    int k=0;

    for(int i=0;i<n;i++) {
        cur=arr[i];
        if(cur==x)
        k++;
       
        for(int j=i+1;j<n;j++) {
            cur=cur^arr[j];
            if(cur==x) { 
                k++;
              
            }
        }
    }
    return k;
}
