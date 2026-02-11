#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> replaceWithRank(vector<int> &arr, int N) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        unordered_map<int,int> mpp;
        int rank = 1;

        for(int i = 0; i < N; i++){
            if(mpp.find(temp[i]) == mpp.end()){
                mpp[temp[i]] = rank;
                rank++;
            }
        }

        for(int i = 0; i < N; i++){
            temp[i] = mpp[arr[i]];
        }

        return temp;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {20, 15, 26, 2, 98, 6};
    int N = arr.size();

    vector<int> result = obj.replaceWithRank(arr, N);

    for(int x : result)
        cout << x << " ";

    return 0;
}
