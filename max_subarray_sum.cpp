// T.C -> O(N)
// S.C -> O(1)
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n){
    long long maxi = arr[0];
    vector<long long> vec(n);
    for(int i = 0; i < n; i++) vec[i] = arr[i];
    for(int i=1; i<n; i++){
        if(vec[i-1] > 0)
            vec[i] += vec[i-1];
        maxi = max(maxi,(long long)vec[i]);
    }
    return max((long long)0,maxi);
}
