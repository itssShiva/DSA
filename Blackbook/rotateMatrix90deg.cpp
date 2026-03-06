#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();       // rows
        int m = mat[0].size();    // columns
        vector<vector<int>> ans(m, vector<int>(n)); // rotated matrix m x n

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans[j][n - 1 - i] = mat[i][j]; // rotate
            }
        }

        mat = ans; // assign rotated matrix back
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];

    Solution sol;
    sol.rotateMatrix(mat);

    cout << "Rotated Matrix:\n";
    for(auto &row : mat){
        for(int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}