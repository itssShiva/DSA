#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mult = 1;
        int maxmult = INT_MIN;

        for (int i = 0; i < n; i++) {
            mult = mult * nums[i];
            maxmult = max(mult, maxmult);

          
        }

        return maxmult;
    }
};

int main() {
    vector<int> arr = {2, 3, -2, 4};
    Solution sol;
    int result = sol.maxProduct(arr);
    cout << "Maximum product subarray: " << result << endl;
    return 0;
}
