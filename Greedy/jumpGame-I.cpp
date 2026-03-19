#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxInd = 0;
        for (int i = 0; i < n; i++) {
            if (i > maxInd) return false;
            maxInd = max(maxInd, i + nums[i]);
        }
        return true;
    }
};

int main() {
    Solution obj;

    // Test case 1
    vector<int> nums1 = {2, 3, 1, 1, 4};
    cout << "Test case 1: ";
    cout << (obj.canJump(nums1) ? "true" : "false") << endl;

    // Test case 2
    vector<int> nums2 = {3, 2, 1, 0, 4};
    cout << "Test case 2: ";
    cout << (obj.canJump(nums2) ? "true" : "false") << endl;

    return 0;
}