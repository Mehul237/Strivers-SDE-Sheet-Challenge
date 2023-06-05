#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m) {

    if(n==1 || m==1) return;

    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;

    while(top<bottom && left < right) {

        int temp = mat[left][top];

        for(int i=top; i<bottom; i++) {
            mat[i][left] = mat[i+1][left];
        }

        for (int i=left; i<right; i++) {
          mat[bottom][i] = mat[bottom][i + 1];
        }

        for (int i=bottom; i>top; i--) {
          mat[i][right] = mat[i - 1][right];
        }

        for(int i=right; i>left+1; i--) {
            mat[top][i] = mat[top][i-1];
        }

        mat[top][left+1] = temp;

        top++;
        bottom--;
        left++;
        right--;
    }
}
