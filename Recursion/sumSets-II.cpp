#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void f(int ind, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {
        ans.push_back(ds);
        for (int i = ind; i < nums.size(); i++) {
            if (i > ind && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);
            f(i + 1, nums, ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ds;
        vector<vector<int>> ans;
        f(0, nums, ds, ans);
        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 2};

    vector<vector<int>> result = obj.subsetsWithDup(nums);

    cout << "Subsets are:\n";
    for (auto &v : result) {
        cout << "[ ";
        for (auto x : v) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}