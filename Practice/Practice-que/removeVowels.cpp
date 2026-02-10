#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Take you Forward";
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str=str.substr(0,i)+str.substr(i+1);
            i--;
        }
    }
    cout<<str;
}