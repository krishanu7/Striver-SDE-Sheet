//T.C -> O(N*N)
//S.C -> O(1)

#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(arr[i] > arr[j] && (i < j)){
                ans++;
            }
        }
    }
    return ans;
}

---------------------------------------------------------------
//T.C -> O(N*log(N))
// S.C -> O(N)
#include <bits/stdc++.h> 
long long merge(long long* arr, int low, int mid, int high, int n){
    vector<long long> temp;
    long long left = low;  
    long long right = mid + 1;
    long long cnt = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

long long mergeSort(long long* arr, int left, int right, int n){
    long long inversion = 0;
    if(left < right){
        long long mid = left + (right-left)/2;
        inversion += mergeSort(arr,left,mid,n);
        inversion += mergeSort(arr,mid+1,right,n);
        inversion += merge(arr,left,mid,right,n);
    }
    return inversion;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergeSort(arr,0,n-1,n);
}
