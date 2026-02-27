#include<bits/stdc++.h>
using namespace std;


int secondLargest(vector<int>&arr){
    
    if(arr.size()<2) return -1;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
        if(pq.size()>2) pq.pop();
    }
   return pq.top();
}

int main(){
    string s;
    getline(cin,s);
    if(s.front()=='['&&s.back()==']'){
        s=s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    
    string token;
    vector<int>arr;
    while(getline(ss,token,',')){
        int x=stoi(token);
        arr.push_back(x);
    }
    int res=secondLargest(arr);
    cout<<res;
}