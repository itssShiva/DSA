#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original=n;
    string res=to_string(original);
    int d=res.size();
    double arm=0.0;
    if(n<0){
        cout<<"False";
        return 0;
    }
    while(n!=0){
        int digit=n%10;
        arm+=pow(digit,d);
        n/=10;
    }
    if(arm==original){
        cout<<"True";
        return 0;
    } 
    
    cout<<"False";
}