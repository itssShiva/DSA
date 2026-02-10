#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    unordered_map<char,int>mpp;
    string s="shiva";
    for(auto ch:s){
        mpp[ch]++;
    }

 for (auto it:mpp)
 {
    cout<<it.first<<"=>"<<it.second<<endl;
 }
 
}