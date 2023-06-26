
#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {

    vector<int> nge(n, 0);
    stack<int> st;

    for(int i=0; i<n; i++) {

        while(!st.empty() && st.top() <= arr[n-i-1]) {
            st.pop();
        }

        if(st.empty()==false) {
            nge[n-i-1] = st.top();
        }

        else {
            nge[n-i-1]=-1;
        }
        st.push(arr[n-i-1]);
    }
    return nge;  
}
