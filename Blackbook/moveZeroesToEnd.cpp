#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j == -1) return;
        for(int i = j+1; i < n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums;

    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    sol.moveZeroes(nums);

    cout << "Array after moving zeros to the end: ";
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}