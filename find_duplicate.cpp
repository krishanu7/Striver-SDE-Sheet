/*
//T.C -> O(N)
//S.C -> O(N)

#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_set<int> s;
	for(auto num : arr){
		if(!s.count(num)){
			s.insert(num);
		}else{
			return num;
		}
	}
}
*/
//T.C -> O(N)
//S.C -> O(1)
#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int find = 0;
	for(int i = 0; i < n; i++){
		find = abs(arr[i]);
		if(arr[find] < 0) return find;
		else arr[find] = -arr[find];
	}
}

