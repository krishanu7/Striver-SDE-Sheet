// T.C -> O(N) in two traversal
// S.C -> O(1)
#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   //   Write your code here
   int zero = 0, one = 0, two = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]==0) zero++;
            else if(nums[i]==1) one++;
            else two++;
        }
        int i = 0;
        while(one || zero || two){
            if(zero) {nums[i++] = 0; zero--;}
            else if(one) {nums[i++] = 1; one--;}
            else {nums[i++] = 2; two--;}
        }
}
// T.C -> O(N) in one traversal
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int lo = 0, hi = n-1, mid = 0;
   while(mid <= hi){
      if(arr[mid] == 0){
         swap(arr[mid++],arr[lo++]);
      }else if(arr[mid] == 1){
         mid++;
      }else{
         swap(arr[mid], arr[hi--]);
      }
   }
}
