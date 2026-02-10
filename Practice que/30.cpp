#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="idea code fly";
    vector<string>temp;
    string result="";
    stringstream ss(s);
    string words;
    while(ss>>words){
        int countVowels=0;
        int countConsonants=0;
        for(int i=0;i<words.size();i++){
            if(words[i]=='a'||words[i]=='e'||words[i]=='o'||words[i]=='u'||words[i]=='i'||words[i]=='A'||words[i]=='E'||words[i]=='I'||words[i]=='O'||words[i]=='U'){
                countVowels++;
            }
            else{
                countConsonants++;
            }
        }
        if(countVowels>countConsonants){
            result+=to_string(words.size());
        }
        else{
           reverse(words.begin(),words.end());
           result+=words;
        }
    }

    cout<<result;
    
}