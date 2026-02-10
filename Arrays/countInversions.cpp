#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
        long long int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]&&i<j){
                    count++;
                }
            }
        }
        return count;
    }
};
int main() {
    Solution sol;

    // Example input
    vector<int> nums = {2, 3, 7, 1, 3, 5};  

    long long int result = sol.numberOfInversions(nums);

    cout << "Number of Inversions: " << result << endl;

    return 0;
}