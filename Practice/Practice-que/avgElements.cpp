#include<iostream>
#include<vector>
using namespace std;
int avgOfArray(vector<int>&nums){
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    int avg=sum/n;
    return avg;
}
int main(){
    vector<int> nums = {10, 20, 30, 40, 50};  // example array

    int average = avgOfArray(nums);

    cout << "Average of array: " << average << endl;

    return 0;
}