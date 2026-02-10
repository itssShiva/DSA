// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>negative;
        vector<int>positive;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }
        int p=0,q=0;
        for(int i=0;i<n;i++){
            if(i==0||i%2==0){
                if(p>=positive.size()) ans.push_back(negative[q++]);
                else ans.push_back(positive[p++]);
            }
            else{
                if(q>=negative.size()) ans.push_back(positive[p++]);
                else ans.push_back(negative[q++]);
            }
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4,5,-4,6,-4,3,3,3,3,3,3};

    Solution s;
    vector<int> result = s.rearrangeArray(nums);

    cout << "Rearranged Array: ";
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}
