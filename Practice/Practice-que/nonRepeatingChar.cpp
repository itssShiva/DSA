#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string str="sshhivva";
    unordered_map<char,int>mpp;
    for(auto ch:str){
        mpp[ch]++;
    }

    for(auto it:mpp){
        if(it.second==1){
            cout<<it.first<<endl;
        }
    }
}