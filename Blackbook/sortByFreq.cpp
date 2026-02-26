#include<bits/stdc++.h>
using namespace std;

void sortByFreq(vector<int>& arr){
    int n=arr.size();
    unordered_map<int,int>mpp;
    for(auto it:arr){
        mpp[it]++;
    }
    
    auto cmp=[&](int a,int b){
        if(mpp[a]==mpp[b]) return a>b;
        return mpp[a]>mpp[b];
    };
    
    sort(arr.begin(),arr.end(),cmp);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    sortByFreq(arr);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
}