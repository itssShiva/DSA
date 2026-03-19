#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0, r = 1, maxLength = 0;

        while(r < n){
            while(nums[r] - nums[l] > 1) l++;

            if(nums[r] - nums[l] == 1)
                maxLength = max(maxLength, r - l + 1);

            r++;
        }
        return maxLength;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};

    int result = obj.findLHS(nums);

    cout << "Longest Harmonious Subsequence length: " << result << endl;

    return 0;
}