#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution obj;
    
    int n, val;
    cin >> n;              // size of array
    vector<int> nums(n);
    
    for(int i = 0; i < n; i++){
        cin >> nums[i];    // input array
    }
    
    cin >> val;            // value to remove
    
    int k = obj.removeElement(nums, val);
    
    cout << "New length: " << k << endl;
    cout << "Array after removal: ";
    
    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
    
    return 0;
}