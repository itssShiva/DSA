#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }



int main(){
    int k;
    cin>>k;
    cin.ignore();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string token;
    vector<int>nums;
    while(getline(ss,token,',')){
        int x=stoi(token);
        nums.push_back(x);
    }
    rotate(nums,k);
    for(auto it:nums){
        cout<<it<<" ";
    }
   return 0; 
}