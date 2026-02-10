//  Given two strings, write a program to remove characters from the first string which are present in the second string.
#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string str1="abcdef";
    string str2="cefz";
    string ans="";
    set<char>st;
    for(auto ch:str2){
        st.insert(ch);
    }
    for(auto sh:str1){
        if(st.find(sh)==st.end()){
            ans.push_back(sh);
        }
    }
    cout<<ans;
}