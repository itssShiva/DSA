#include<iostream>
#include<string>
#include <unordered_set>
using namespace std;
int main(){
    string str="cbacdcbc";
    string ans="";
    unordered_set<char>st;
    for(auto ch:str){
        if(st.find(ch)==st.end()){
            ans.push_back(ch);
            st.insert(ch);
        }
    }
    cout<<ans;
    }
