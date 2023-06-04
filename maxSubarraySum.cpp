#include <bits/stdc++.h> 

long long maxSubarraySum(int arr[], int n) {

    long long currentSum = 0;

    long long maxSum = INT_MIN; 

    for(int i=0; i<n; i++) {
        
        currentSum += arr[i];

        if(currentSum < 0) {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);

    }
    return maxSum;

}
