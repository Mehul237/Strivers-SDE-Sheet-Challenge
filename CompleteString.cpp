
#include <bits/stdc++.h> 

string completeString(int n, vector<string> &a){

    set<string> s;
    string ans = "";

    for (int i = 0; i < n; i++) {
      s.insert(a[i]);
    }

    for(auto i : a) {

        bool flag = 1;
        int m = i.size();

        for(int j=1; j<=m; j++) {

            string t = i.substr(0, j);

            if(s.find(t) == s.end()) {
                flag = 0;
                break;
            }
        }

        if(flag) {

            if(ans.size() == m) {
                ans = min(ans,i);
            }
            else if(ans.size() < m)
                ans = i;
        }
    }
    
    if(ans.size())
        return ans;
    return "None";
}
