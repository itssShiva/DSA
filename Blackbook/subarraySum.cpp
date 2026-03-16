#include<bits/stdc++.h>
using namespace std;

void subArray(vector<int>&arr,int sum){
    int n=arr.size();
    int currSum=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        
        if(currSum==sum){
            cout<<"0"<<i<<endl;
            return;
        }
        if(mpp.find(currSum-sum)!=mpp.end()){
            cout<<mpp[currSum-sum]+1<<" "<<i<<endl;
            return;
        }
        mpp[currSum]=i;
        
    }
}


    int main(){
        int n,sum;
        cin>>n>>sum;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        subArray(arr,sum);
        
   return 0;
}