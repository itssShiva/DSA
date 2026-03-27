#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> arr = mat;
        int m = mat.size();
        int n = mat[0].size();

        k = k % n;

        for (int j = 0; j < k; j++) {
            for (int i = 0; i < m; i++) {
                vector<int> temp = arr[i];

                if (i % 2 == 0) {
                    reverse(temp.begin(), temp.end());
                    reverse(temp.begin(), temp.end() - 1);
                    arr[i] = temp;
                } else {
                    reverse(temp.begin(), temp.end());
                    reverse(temp.begin() + 1, temp.end());
                    arr[i] = temp;
                }
            }
        }

        return arr == mat;
    }
};

int main() {
    int m, n, k;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cin >> k;

    Solution obj;
    bool ans = obj.areSimilar(mat, k);

    if (ans) cout << "true\n";
    else cout << "false\n";

    return 0;
}