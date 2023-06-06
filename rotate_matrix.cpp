#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m){
    int top = 0, bot = n-1, left = 0, right = m-1;
    if(n==1 || m == 1) return;
    while(top < bot && left < right){
        int temp = mat[top][left];
        for(int i = top; i < bot; i++){
            mat[i][left] = mat[i+1][left];
        }
        for(int j = left; j < right; j++){
            mat[bot][j] = mat[bot][j+1];
        }
        for(int i = bot ; i > top ; i--){
            mat[i][right] = mat[i-1][right];
        }
        for(int j = right; j > left; j--){
            mat[top][j] = mat[top][j-1];
        }
        mat[top][left+1] = temp;
        top++, bot--; left++; right--;
    }
}
// T.C ~ O(N^2)
// S.C = O(1)
