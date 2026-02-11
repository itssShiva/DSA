#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> temp;
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                pq.push(mat[i][j]);
            }
        }

        while(!pq.empty()){
            temp.push_back(pq.top());
            pq.pop();
        }
        return temp;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> mat = {
        {1, 3, 5},
        {2, 4, 6},
        {0, 9, 8}
    };

    vector<int> result = obj.mergeArrays(mat);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}
