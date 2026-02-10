#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int len=s.length();
    s=s.substr(1,len-2);
    string token;
    vector<int>temp;
    stringstream ss(s);
    while(getline(ss,token,',')){
        int num=stoi(token);
        temp.push_back(num);
    }
    vector<int>result(temp.size());
    int evenIdx=0;
    int oddIdx=1;
    for(int i=0;i<temp.size();i++){
        if(temp[i]>0){
            result[evenIdx]=temp[i];
            evenIdx+=2;
        }
        else{
            result[oddIdx]=temp[i];
            oddIdx+=2;
        }
    }
    for(auto it:result) cout<<it<<" ";
    
}