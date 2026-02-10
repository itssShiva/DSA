// A subarray is called balanced if the number of distinct even numbers in the subarray is equal to the number of distinct odd numbers.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;

        for(int i = 0; i < n; i++) {
            set<int> even;
            set<int> odd;

            for(int j = i; j < n; j++) {
                if(nums[j] % 2 == 0)
                    even.insert(nums[j]);
                else
                    odd.insert(nums[j]);

                if(even.size() == odd.size()) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution obj;
    cout << obj.longestBalanced(nums);
    return 0;
}
