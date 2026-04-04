#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void f(vector<int>& ds, vector<int>& nums, set<vector<int>>& ans, int freq[]) {
        if (ds.size() == nums.size()) {
            ans.insert(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {
                ds.push_back(nums[i]);
                freq[i] = 1;
                f(ds, nums, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++) freq[i] = 0;

        set<vector<int>> ans;
        vector<int> ds;

        f(ds, nums, ans, freq);

        vector<vector<int>> result;
        for (auto it : ans) result.push_back(it);

        return result;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 2};

    vector<vector<int>> result = obj.permuteUnique(nums);

    cout << "Unique Permutations are:\n";
    for (auto &vec : result) {
        for (auto &x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}