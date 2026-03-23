#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int e : nums) {
            if (i == 0 || i == 1 || nums[i - 2] != e) {
                nums[i] = e;
                i++;
            }
        }
        return i;
    }
};

int main() {
    Solution obj;
    
    vector<int> nums = {1, 1, 1, 2, 2, 3};

    int k = obj.removeDuplicates(nums);

    cout << "Length after removing duplicates: " << k << endl;
    cout << "Updated array: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}