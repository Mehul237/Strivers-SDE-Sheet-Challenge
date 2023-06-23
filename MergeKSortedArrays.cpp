
#include <bits/stdc++.h> 

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k) {

    multiset<int> s;
    vector<int> v;

    for(auto ele : kArrays) {
        for(auto el:ele) 
          s.insert(el);
    }

    for(auto ele:s) 
     v.push_back(ele);
    return v;
   
}
