// Prime factorisation of a Number

#include<iostream>
#include<vector>
using namespace std;

int primeFactor(int n){
    vector<int>spf(n+1);
    vector<int>temp;
    for(int i=1;i<=n;i++) spf[i]=i;
    for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
               if(spf[j]==j) spf[j]=i;
            }
        }
    }
    return spf[n];
}




int main(){
    int n=4;
    vector<int>temp={2,3,4,5,6};
    vector<int>rep;
    vector<vector<int>>ans;
    for(int i=0;i<temp.size();i++){
        while(temp[i]!=1){
        int k=primeFactor(temp[i]);
        rep.push_back(k);
        temp[i]/=k;
    }
    ans.push_back(rep);
    rep.clear();
    }
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
    }
}