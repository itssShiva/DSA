#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
double medianOfArray(vector<int>&nums){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    if(n%2==1){
        return nums[n/2];
    }
    else{
        return (nums[n/2-1]+nums[n/2])/2.0;
    }
}




int main(){
    vector<int> nums = {2,5,1,7};  // example array

   double median = medianOfArray(nums);

    cout << "Median of array: " << median << endl;

    return 0;
}