#include <bits/stdc++.h> 

/*
----------------------------------------------------
    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval
----------------------------------------------------
*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {

    vector<int> start;
    vector<int> find;
    vector<vector<int>> mergedInterval;

    int size = intervals.size();

    for(int i=0; i<size; i++) {
        start.push_back(intervals[i][0]);
        find.push_back(intervals[i][1]);
    }

    sort(start.begin() , start.end());
    sort(find.begin() , find.end());

    int mini = start[0];
    int maxi = find[0];
    int last = 0;

    if(size == 1) {
        mergedInterval.push_back({mini, maxi});    
    }

    for(int i=0; i<size-1; i++) {

        mini = min(start[i], mini);
        maxi = max(find[i], maxi);

        if(find[i] >= start[i+1]) {

            maxi = find[i+1];

            if(i == size-2) {
                maxi = max(find[i+1], maxi);
                mergedInterval.push_back({mini, maxi});           
            }

        }

        else {

            mergedInterval.push_back({mini, maxi});
            mini = start[i+1];

            if(i == size-2) {
                maxi = max(find[i+1], maxi);
                mergedInterval.push_back({mini, maxi});           
            }

        }

    }
    return mergedInterval;    

}
