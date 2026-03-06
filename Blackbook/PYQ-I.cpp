#include<bits/stdc++.h>
using namespace std;

bool isPallindorme(int n){
    string s=to_string(n);
    int k=s.size();
    for(int i=0;i<=k/2;i++){
        if(s[i]!=s[k-i-1]) return false;
    }
    return true;
}

bool isRepeated(int n){
    vector<int>repeat;
    while(n!=0){
        int digit=n%10;
        if(find(repeat.begin(),repeat.end(),digit)==repeat.end()) repeat.push_back(digit);
        else return false;
        n/=10;
    }
    return true;
}

int main(){
    int L,R;
    cin>>L>>R;
    vector<int>ans;
    for(int i=L;i<=R;i++){
        if((i%7)==0&&(i%5)!=0&&!isPallindorme(i)&&isRepeated(i)){
            ans.push_back(i);
        }
    }
    if(ans.size()==0){
        cout<<"-1";
        return 0;
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}