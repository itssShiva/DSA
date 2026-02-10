#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
     string s="sinstriiintng";
     map<char,int>mpp;
     for(auto ch:s){
        mpp[ch]++;
     }
     for(auto it:mpp){
        if(it.second>1){
            cout<<it.first<<"->"<<it.second<<endl;
        }
     }


}