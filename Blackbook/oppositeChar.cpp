#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(char &ch:s){
        ch=ch-'A';
        ch='Z'-ch;
    }
    cout<<s;
}