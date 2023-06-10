// Brute Force : Take a hashmap and store frequencies of all the elements
// return the maximum freq which is greater than n/2
// T.C -> O(N), S.C -> O(N)

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int count = 0;
	int element = -1;
	for(int i = 0; i < n; i++){
		if(count == 0) element = arr[i];
		if(arr[i] == element) count++;
		else count--;
	}
	count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == element) count++;
	}

	return n/2 < count ? element : -1;
}
// T.C -> O(2N)
// S.C -> O(1)
