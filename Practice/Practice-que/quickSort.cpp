#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (nums[i] <= pivot && i <= high - 1) {
                i++;
            }
            while (nums[j] > pivot && j >= low + 1) {
                j--;
            }
            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }

    void qs(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pIndex = partition(nums, low, high);
            qs(nums, low, pIndex - 1);
            qs(nums, pIndex + 1, high);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {29, 10, 14, 37, 13}; // Example array

    cout << "Original array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    vector<int> sorted = s.quickSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) cout << num << " ";
    cout << endl;

    return 0;
}
