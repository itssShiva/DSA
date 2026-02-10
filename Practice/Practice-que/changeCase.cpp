//Problem Statement: Write a  program to change the case (lower to upper and upper to lower cases) of each character of a given string.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="shivA";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=toupper(s[i]);
        }
        else{
          s[i]=tolower(s[i]);
        }
    }
   cout<<s;
}