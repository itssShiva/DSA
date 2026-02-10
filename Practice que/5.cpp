//  Given an array, count how many prime numbers appear exactly once.
#include<iostream>
#include<map>
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
int main(){
    int a[]={17,17,2,67};
    map<int,int>freq;
    int count=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(isPrime(a[i])){
            freq[a[i]]++;
        }
    }
    for(auto it:freq){
        if(it.second==1){
            count++;
        }
    }
    cout<<count;
}