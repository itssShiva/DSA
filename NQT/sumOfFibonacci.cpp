#include<bits/stdc++.h>
using namespace std;


int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    
    return fibonacci(n-1)+fibonacci(n-2);
}


int main(){
    int n;
    cin>>n;
    cin.ignore();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=fibonacci(i);
    }
    cout<<sum;
}