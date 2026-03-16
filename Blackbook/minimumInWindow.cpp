#include<bits/stdc++.h>
using namespace std;
void minSlidingWindow(vector<int>&arr,int k){
    int n=arr.size();
    deque<int>dq;
    for(int i=0;i<n;i++){
        while(!dq.empty()&&dq.front()==i-k) dq.pop_front();
        
        while(!dq.empty()&&arr[dq.back()]>arr[i]) dq.pop_back();
        
        dq.push_back(i);
        
        if(i>=k-1){
            cout<<arr[dq.front()]<<" ";
        }
    }
}



int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   minSlidingWindow(arr,k);
   return 0;
    
}