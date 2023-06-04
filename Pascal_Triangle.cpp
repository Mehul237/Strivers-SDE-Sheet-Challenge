#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n)  {

  vector<vector<long long int>>vPascal;

  for(int i=0; i<n; i++) {

    vector<long long int>ansVector;
    
    for(int j=0; j<i+1; j++) {
      ansVector.push_back(1);
    }
    vPascal.push_back(ansVector);
  }

  for(int  i=1 ; i<n; i++) {
    for(int j=1; j<i; j++) {
      vPascal[i][j] = vPascal[i-1][j-1] + vPascal[i-1][j];
    }
  }
  return vPascal;

}
