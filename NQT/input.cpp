#include<bits/stdc++.h>
using namespace std;

void sumOfEl(vector<int>&arr){
    int sum=accumulate(arr.begin(),arr.end(),0);
    cout<<sum;
}

int main(){
    vector<int>temp;
    string s;
   
    getline(cin,s);
     if(s.front()=='['&&s.back()==']') s=s.substr(1,s.length()-2);
    stringstream ss(s);
    string token;
    
    while(getline(ss,token,' ')){
        int v=stoi(token);
        temp.push_back(v);
    }
    sumOfEl(temp);
    
}