#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    vector<string>arr(n);
    stringstream ss(s);
    string token;
    map<int,int>left;
    map<int,int>right;
    int i=0;
    while(getline(ss,token,' ')){
        arr[i]=token;
        i++;
    }
    
    for(string t:arr){
        int size=stoi(t.substr(0,t.size()-1));
        char side=t.back();
        
        if(side=='L'||side=='l'){
            left[size]++;
        }
        else{
            right[size]++;
        }
    }
    int pairs=0;
    for(auto it:left){
        int size=it.first;
        pairs+=min(left[size],right[size]);
    }
    cout<<pairs;
    return 0;
}