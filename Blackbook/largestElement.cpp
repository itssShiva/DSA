#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>&arr){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>1) pq.pop();
    }
    return pq.top();
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=largestElement(arr);
    cout<<res;
}