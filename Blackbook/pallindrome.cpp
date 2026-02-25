#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"False";
        return 0;
    }
    string re=to_string(n);
    int x=re.size();
    for(int i=0;i<re.size()/2;i++){
        if(re[i]!=re[x-i-1]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"True";
    return 0;
}