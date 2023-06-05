// T.C -> O((M+N)*N+(M+N)*M) ~ O(N*M)
// S.C -> O(M+N)
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	queue<pair<int,int>> q;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0) q.push({i,j});
            }
        }
        while(!q.empty()){
            pair<int,int> temp = q.front(); q.pop();
            for(int j = 0; j < n; j++){
                matrix[temp.first][j] = 0;
            }
            for(int i = 0; i < m; i++){
                matrix[i][temp.second] = 0;
            }
        }
}
