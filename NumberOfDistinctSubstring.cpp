
#include <bits/stdc++.h> 

int distinctSubstring(string &word) {

    set<string> st;
    
    int l = word.length();
    
    for(int i=0; i<l; ++i){
        for(int j=1; j<=l; ++j){
            string t = word.substr(i,j);
            st.insert(t);
        }
    }   
    return st.size();
}
