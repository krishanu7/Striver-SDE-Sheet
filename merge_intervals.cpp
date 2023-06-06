#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
static bool cmp(const vector<int>& a, const vector<int>& b){
    if(a[0] == b[0])
        return a[1] < b[1];
    return a[0] < b[0];
}
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end(),cmp);
    vector<int> prev = intervals[0]; // [1,4]
    for(int curr = 1; curr < intervals.size(); curr++){
        if(prev[1] >= intervals[curr][0])
            prev[1] = max(prev[1],intervals[curr][1]);
        else{
            ans.push_back(prev);
            prev = intervals[curr];
        }
    }
    ans.push_back(prev);
    return ans;
}
