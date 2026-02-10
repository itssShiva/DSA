#include<iostream>
#include<sstream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    string s=" a good  example  ";
    string words;
    string result="";
    stringstream ss(s);
    vector<string>temp;
    while(ss>>words){
        temp.push_back(words);
    }
    reverse(temp.begin(),temp.end());
    for(auto ch:temp){
        result+=ch+" ";
    }
    cout<<result;
}