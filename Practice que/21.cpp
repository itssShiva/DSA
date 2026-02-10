// Given array, replace each number by next prime greater than it.

#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<2)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int findNextPrime(int k){
    int i=k+1;
    while(true){
        if(isPrime(i)){
            return i;
        }
        i++;
    }
    return -1;
}
int main(){
    int a[]={2,5,2,74,7,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        int nextPrime=findNextPrime(a[i]);
        a[i]=nextPrime;
    }
    for(auto it:a){
        cout<<it<<endl;
    }
}