#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=abs(n);
    if(n==0){
        cout<<0;
        return 0;
    }
    int maxi=INT_MIN;
    while(n!=0){
        int digit=n%10;
        maxi=max(maxi,digit);
        n/=10;
    }
    cout<<maxi;
    return 0;
}