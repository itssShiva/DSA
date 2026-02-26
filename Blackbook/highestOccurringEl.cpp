#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[i];
    }
    unordered_map<int,int>mpp;
    for(auto it:temp){
        mpp[it]++;
    }
    auto cmp=[&](int a,int b){
        if(mpp[a]==mpp[b]) return a<b;
        return mpp[a]>mpp[b];
    };
    sort(temp.begin(),temp.end(),cmp);
    cout<<temp[0];
}