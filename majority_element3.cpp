#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
    int num = floor((float)nums.size()/3);
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto it : mp){
            if(it.second > num){
                ans.push_back(it.first);
            }
        }
        return ans;

}
