// Problem Statement: Given a string, write a program to change every letter in the given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a)

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Java";
    string ans="";
    for(auto ch:str){
        char sh=ch+1;
       if(ch=='z'){
            ans.push_back('a');
       }
       else if(ch=='Z'){
            ans.push_back('A');
       }
       else{
        ans.push_back(sh);
       }
       
    }
    cout<<ans;
}