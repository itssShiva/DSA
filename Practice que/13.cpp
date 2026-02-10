//  Given an array, output the largest prime (or -1 if none).
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
int main(){
    int a[]={7,5,2,98,6,9,37,6,7,6,7,67,2,3,23,677};
    int largestPrime=-1;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(isPrime(a[i])){
            if(a[i]>largestPrime){
                largestPrime=a[i];
            }
        }
    }
    cout<<largestPrime;

}