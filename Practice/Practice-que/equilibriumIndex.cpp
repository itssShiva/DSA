#include<iostream>
#include<vector>
using namespace std;

int findEquilibriumIdx(int arr[],int n){
    int leftSum;
    int rightSum;

    for(int i=0;i<n;i++){
        leftSum=0;
        for(int j=0;j<i;j++){
            leftSum+=arr[j];
        }
        rightSum=0;
        for(int j=i+1;j<n;j++){
            rightSum+=arr[j];
        }
        if(leftSum==rightSum){
            return i;
        }
    }
    return -1;
}

//LINEAR SEARCH

    int linearSearch(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;
        }
       }
       return -1;
    }


int main() {
  int n = 5;
  int arr[] = {2,3,-1,8,4};
  vector<int>nums={1,6,58,9,4,7,5};
  int equilibriumidx = findEquilibriumIdx(arr, n);
  int idx=linearSearch(nums,4);
  cout<<idx<<endl;
  cout << equilibriumidx << endl;
  return 0;
}