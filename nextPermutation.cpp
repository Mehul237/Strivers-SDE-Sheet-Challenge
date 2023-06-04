#include <bits/stdc++.h> 

vector<int> nextPermutation(vector<int> &arr, int n) {

  int index = -1;

  for(int i=n-2; i>=0; i--) {

  if(arr[i] < arr[i+1]) {
     index = i;
     break;
    }
  }

  if (index == -1) {
    reverse(arr.begin(), arr.end());
    return arr;
  }

  for(int i=n-1; i>=0; i--) {
    if (arr[i] > arr[index]) {
      swap(arr[index], arr[i]);
      break;
    }
  }
  sort(arr.begin()+ind+1, arr.end());
  return arr;

}
