#include<iostream>
using namespace std;


string mergedString(string &s,string &t){
    int i=0;
    int j=0;
    string result="";
    
   while(i<s.size()||j<t.size()){
    if(i<s.size()){
        result+=s[i++];
    }
    if(j<t.size()){
        result+=t[j++];
    }
   }
    return result;
}

int main(){
    string word1="abc";
    string word2="pqr";
    string response=mergedString(word1,word2);
    cout<<response;
    return 0;
}