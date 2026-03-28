#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n<=1) return n;
    int first=f(n-1);
    int second=f(n-2);
    return first+second;
}


int main(){
    int n;
    cin>>n;
    int x=f(n);
    cout<<x;
}