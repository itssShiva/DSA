#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int curr = 0, total = 0;

        for(int i = 2; i < n; i++){
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
                curr++;
                total += curr;
            } else {
                curr = 0;
            }
        }
        return total;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 4};

    int result = obj.numberOfArithmeticSlices(nums);

    cout << "Number of arithmetic slices: " << result << endl;

    return 0;
}