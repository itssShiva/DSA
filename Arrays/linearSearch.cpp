#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;
            break;
        }
        if(nums[i]!=target&&i==(nums.size()-1)){
            return -1;
        }
       }
    }
};
int main(){
    Solution obj;
    vector<int> nums = {1,1,4,0,5,2,0};
    int target=5;
    int result=obj.linearSearch(nums,target);
   cout<<result;
}
