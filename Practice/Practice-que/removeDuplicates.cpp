#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> mySet(nums.begin(), nums.end());
        nums.assign(mySet.begin(), mySet.end());
        int n = nums.size();
        return n;
    }
}; 

int main() {
    Solution sol;

    vector<int> nums = {0,0,9,1,9,2,2,3,3,4};
    
    int newLength = sol.removeDuplicates(nums);

    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
