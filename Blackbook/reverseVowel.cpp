#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    c=tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    int i=0,j=n-1;
    while(i<j){
        if(!isVowel(s[i])) i++;
        else if(!isVowel(s[j])) j--;
        else{
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    cout<<s;
    
    return 0;
}