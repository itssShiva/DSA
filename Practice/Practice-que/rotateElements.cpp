#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int j=0;
        int n=nums.size();
        while(j!=k){
            int first=nums[0];
            for(int i=1;i<n;i++){
                nums[i-1]=nums[i];
            }
            nums[n-1]=first;
            j++;
        }
    }
};
int main() {
    // Example: initialize array and k
    vector<int> arr = {3, 4, 1, 5, 3, -5};
    int k = 8;

    Solution solution;
    solution.rotateArray(arr, k);

    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}