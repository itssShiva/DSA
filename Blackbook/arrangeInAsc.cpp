#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);
    set<string> st;
    string token;

    while(getline(ss,token,',')){
        while(token[0]==' ')
            token.erase(0,1);

        st.insert(token);
    }

    for(auto it:st){
        cout<<it<<" ";
    }

    return 0;
}