#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<bool>temp(n,true);
    temp[0]=false;
    temp[1]=false;
    for(int i=2;i*i<n;i++){
        if(temp[i]){
            for(int j=i*i;j<n;j+=i){
                temp[j]=false;
            }
        }
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(temp[i]){
            ans.push_back(i);
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}