
 #include<bits/stdc++.h>

 int largestRectangle(vector < int > & arr) {

  stack<int> st;
  int n=arr.size();
  int res=0, curr, tp;

  for(int i=0; i<n; i++) {

    while(st.empty()==false && arr[st.top()]>=arr[i]) {
      
      tp = st.top();
      st.pop();
      curr = arr[tp]*(st.empty()?i:(i-st.top()-1));
      res = max(res,curr);
    }
    st.push(i);
    
  }

  while(st.empty()==false) {

    int ti = st.top();
    st.pop();
    int curr = arr[ti]*(st.empty()?n:(n-st.top()-1));
    res = max(res,curr);

  }
  return res;
 }
