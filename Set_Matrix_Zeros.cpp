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
//T.C -> O(N*M)
// S.C -> O(1)

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int col0 = 1;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] != 0) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
}
