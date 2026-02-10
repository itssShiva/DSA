#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, cnt = 0, r = 0;
        map<int,int> freq;
        while (r < n) {
            freq[nums[r]]++;
            while (freq.size() > k) {
                freq[nums[l]]--;
                if (freq[nums[l]] == 0) freq.erase(nums[l]);
                l++;
            }
            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int total = atmost(nums, k) - atmost(nums, k - 1);
        return total;
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution s;
    cout << s.subarraysWithKDistinct(nums, k);
    return 0;
}
