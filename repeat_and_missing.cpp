#include <bits/stdc++.h>
#define ll long long
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	ll cursum = 0, actsum = (ll)(n * (n + 1)) / 2;
	for(auto x : arr)
		cursum += (ll)x;
	ll sqcursum = 0, sqactsum = ((ll)n * (ll)(n + 1) * (ll)(2 * n + 1)) / 6;
	for (auto x : arr)
		sqcursum += (ll)x * (ll)x;
	ll diff = cursum - actsum, sqdiff = sqcursum - sqactsum;
	ll sum = sqdiff / diff;

	ll repeating = (sum + diff) / 2;
	ll missing = sum - repeating;
        return {(int)missing, (int)repeating};
}
//T.C -> O(N)
// S.C -> O(1)
