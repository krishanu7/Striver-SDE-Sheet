//T.C -> O(N)
//S.C -> O(N*(N+1)/2)
#include <bits/stdc++.h>
void f(int row, int tar, vector<vector<long long int>>& ans){
  if(row == tar) return;
  vector<long long int> curr(row+1,1);
  for(int j = 1; j < row; j++){
    curr[j] = ans[row-1][j-1] + ans[row-1][j];
  }
  ans.push_back(curr);
  f(row+1,tar,ans);
}

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  f(0,n,ans);
  return ans;
}

