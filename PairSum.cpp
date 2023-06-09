#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {

   sort(arr.begin(),arr.end());
   int i = 0;
   int j = arr.size()-1;
   vector<vector<int>> ans;

   while(i<arr.size()) {

      if(j == i) {
         j = arr.size()-1;
         i++;
      }

      if(arr[i]+arr[j]==s) {

         vector<int> temp;
         temp.push_back(arr[i]);
         temp.push_back(arr[j]);
         ans.push_back(temp);

         if(j == i) {
            j = arr.size()-1;
            i++;
         }
         j--;
      }

      else { 

         if(j == i) {
            j = arr.size()-1;
            i++;
         }

         else {
            j--;
         }   
      }
   }
   return ans;
}
