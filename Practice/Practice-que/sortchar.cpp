//Problem Statement:  Write a program to sort characters (numbers and punctuation symbols are not included) in a given string
#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string str="garena@1";
    set<char>s;
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            tolower(str[i]);
            s.insert(str[i]);
        }
    }
    for(auto it:s){
        cout<<it;
    }
}