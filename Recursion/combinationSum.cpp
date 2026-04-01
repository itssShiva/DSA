#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void f(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>ds){
        if(arr.size()==ind){
            if(target==0) ans.push_back(ds);
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            f(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        f(ind+1,target,arr,ans,ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        f(0,target,candidates,ans,ds);
        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = obj.combinationSum(candidates, target);

    // print result
    for(auto &vec : result){
        cout << "[ ";
        for(auto &num : vec){
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}