/* ---------- Memoization ---------- */
#include <bits/stdc++.h> 
int f(int idx, int buy, int k, vector<int>& prices,vector<vector<int>>& dp){
    // If index is out of the bound then return 0
    if(idx >= prices.size() || k <= 0) return 0;
    if(dp[idx][buy] != -1) return dp[idx][buy];
    if(buy) dp[idx][buy] = max(-1*prices[idx] + f(idx+1,!buy,k,prices,dp),f(idx+1,buy,k,prices,dp));
    else dp[idx][buy] = max(prices[idx]+f(idx+1,1,k-1,prices,dp),f(idx+1,0,k,prices,dp));
    return dp[idx][buy];
}
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    vector<vector<int>> dp(n,vector<int>(2,-1));
    return f(0,1,1,prices,dp);
}
//T.C -> O(N*2)
/*----------- Tabulation ------------- */
#include <bits/stdc++.h> 

int maximumProfit(vector<int> &prices){
    int n= prices.size();
        int maxprofit = 0;
        int mini = INT_MAX;
        for(int i =0;i<n;i++){
            mini= min(prices[i],mini);
            maxprofit= max(maxprofit,prices[i] - mini);
        }
    return maxprofit;
}
//T.C -> O(N)
// S.C -> O(1)

