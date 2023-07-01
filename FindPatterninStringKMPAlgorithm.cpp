

#include <bits/stdc++.h> 

// 1-Approach
bool findPattern(string p, string s) {

    int m=p.size(), n=s.size();
    int count=0;
   
   for(int i=0; i<n; i++) {

       string str = s.substr(i, m);
      
       if(str==p){
           count++;
        }
       else{
          continue;
       }
   }
    if(count>0) return true;
    else if(count==0) return false;  
}


// 2-Solution, One-line Code
bool findPattern(string p, string s) {
    return  strstr(s.c_str(),p.c_str());
}
