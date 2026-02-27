#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxCnt=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                cnt++;
                maxCnt=max(maxCnt,cnt);
                
            }
            else{
                 cnt=0;
            }
           
        }
        return maxCnt;
    }
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='['&&s.back()==']'){
        s=s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    string token;
    vector<int>nums;
    while(getline(ss,token,',')){
        int x=stoi(token);
        nums.push_back(x);
    }
    int result=findMaxConsecutiveOnes(nums);
    cout<<result;
    return 0;
}