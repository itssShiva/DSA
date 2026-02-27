#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<int> &arr) {
        reverse(arr.begin(),arr.end());
        reverse(arr.begin()+1,arr.end());
        
    }
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string token;
    vector<int>arr;
    while(getline(ss,token,',')){
        int x=stoi(token);
        arr.push_back(x);
    }
    rotate(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
   return 0; 
}