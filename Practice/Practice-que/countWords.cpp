#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Hi There";
    int countWords=0;
    int countSpaces=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            countSpaces++;
        }
    }
    countWords=countSpaces+1;
    cout<<countWords;
}