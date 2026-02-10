#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="a+((b-c)+d)";
    int n=str.length();
    for(int i=0;i<n;i++){
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<n;i++){
       if(str[i]=='('||str[i]==')'){
        str=str.substr(0,i)+str.substr(i+1);
        i--;
       }
    }
  
    cout<<str;
}