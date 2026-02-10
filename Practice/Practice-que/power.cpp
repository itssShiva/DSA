#include<iostream>
using namespace std;
int main(){
    double base=5;
    long long expo=3;
    double ans=1.0;
    if(expo<0){
            base=1/base;
            expo=-expo;

    }
    for(int i=0;i<expo;i++){
        ans=base*ans;
    }
    cout<<ans;
}   