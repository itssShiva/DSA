#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void f(int ind, int sum, vector<int>& arr, vector<int>& ans) {
        if (ind == arr.size()) {
            ans.push_back(sum);
            return;
        }

        // include element
        f(ind + 1, sum + arr[ind], arr, ans);

        // exclude element
        f(ind + 1, sum, arr, ans);
    }

    vector<int> subsetSums(vector<int>& arr) {
        vector<int> ans;
        f(0, 0, arr, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 2, 3};

    vector<int> result = obj.subsetSums(arr);

    cout << "Subset sums are:\n";
    for (auto x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}