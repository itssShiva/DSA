#include<bits/stdc++.h>
using namespace std;
int main(){
    string target;
    getline(cin,target);
    int len1=target.length();
    target=target.substr(1,len1-2);
    string reference;
    getline(cin,reference);
    int len2=reference.length();
    reference=reference.substr(1,len2-2);
    string result="";
    for(char ch:target){
        if(reference.find(ch)==string::npos){
            result+=ch;
        }
    }
    cout<<result;
}