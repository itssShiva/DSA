#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j > 0 && nums[j - 1] > nums[j]) {
                swap(nums[j - 1], nums[j]);
                j--;
            }
        }
        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {29, 10, 14, 37, 13}; // Example array

    cout << "Original array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    vector<int> sorted = s.insertionSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) cout << num << " ";
    cout << endl;

    return 0;
}
