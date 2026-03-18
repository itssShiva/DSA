#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(mpp.find(nums[i]) != mpp.end()) {
                int id = abs(i - mpp[nums[i]]);
                if(id <= k) return true;
            }
            mpp[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    if(sol.containsNearbyDuplicate(nums, k)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}