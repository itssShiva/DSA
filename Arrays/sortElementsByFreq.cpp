#include<bits/stdc++.h>
using namespace std;

void sortElements(vector<int>&nums,int n){
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++) mpp[nums[i]]++;

    auto cmp=[&](int a,int b){
        if(mpp[a]==mpp[b])  return a<b;
        return mpp[a]>mpp[b];
    };

    sort(nums.begin(),nums.end(),cmp);
}


int main(){
    vector<int> nums={1,5,6,1,4,2,1,2,1,24,5,6,4,4};
    int n=nums.size();
    sortElements(nums,n);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}