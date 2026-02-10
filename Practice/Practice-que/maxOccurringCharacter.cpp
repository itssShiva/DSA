#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    int maxFreq=0;
    char maxChar;
    string s="takeuforward";    
    map<char,int>mpp;
    for(auto ch:s){
        mpp[ch]++;
    }
    for(auto it:mpp){
        if(it.second>maxFreq){
                maxFreq=it.second;
                maxChar=it.first;
        }
    }
    cout<<"Maximum occurring character "<<maxChar
    <<" with frequency "<<maxFreq;

}