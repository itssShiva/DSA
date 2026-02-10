#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    int len=s.length();
    s=s.substr(1,len-2);
    stringstream ss(s);
    string token;
    vector<int>temp;
    while(getline(ss,token,',')){
        int num=stoi(token);
        if(num>0&&num<=n)  temp.push_back(num);
       
    }
    map<int,int>freq;
    for(int i=0;i<temp.size();i++){
        freq[temp[i]]++;
    }
    for(auto it:freq){
        cout<<"Child "<<it.first<<":"<<it.second<<" "<<"chocolates"<<endl;
    }
}