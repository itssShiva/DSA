//  Given array, output sum of prime numbers that appear more than once
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
    int a[]={5,2,5,2,7,7,67,67,45,2,21,4};
    int n=sizeof(a)/sizeof(a[0]);
    map<int,int>mpp;
    int sum=0;
    for(int i=0;i<n;i++){
        if(isPrime(a[i])){
            mpp[a[i]]++;
        }
    }
    for(auto it:mpp){
        if(it.second>1){
            sum+=it.first;
        }
    }
    cout<<sum;
}