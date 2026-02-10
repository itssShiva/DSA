#include<iostream>
using namespace std;

string reverseString(int i,string s){
    
    if(i>=s.size()/2)return "true";
    if(s[i]!=s[s.size()-i-1]) return "false";
    return reverseString(i+1,s);
}
int main(){
    string s="hum";
   string result= reverseString(0,s);
   cout<<result;
}