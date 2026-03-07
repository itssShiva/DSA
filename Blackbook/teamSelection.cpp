#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    
    int prod=n;
    long long res=1;
    for(int i=1;i<=r;i++){
        res*=prod;
        res/=i;
        prod--;
    }
    cout<<res;
    return 0;
}