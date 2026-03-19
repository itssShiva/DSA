#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0,r=0,sum=0,n=nums.size();
        double maxAvg=INT_MIN;
        while(r<n){
            sum+=nums[r];
            if(r-l+1==k){
                double avg=(double)sum/(double)k;
                maxAvg=max(maxAvg,avg);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return maxAvg;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double result = obj.findMaxAverage(nums, k);

    cout << "Maximum average subarray of size " << k << " is: " << result << endl;

    return 0;
}