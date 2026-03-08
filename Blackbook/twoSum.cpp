#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mpp;

        for(int i = 0; i < n; i++) {
            int remove = target - nums[i];

            if(mpp.find(remove) != mpp.end())
                return {mpp[remove], i};

            mpp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: ";
    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}