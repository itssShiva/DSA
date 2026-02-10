// sum of duplicate prime number in array 
// Example:
// [20,3,81,9,2,9,3,3,66,11,5,90,5]
#include<iostream>
#include<map>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if((n%i)==0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int a[]={20,3,81,9,2,9,3,3,66,11,5,90,5};
    map<int,int>freq;
    int sum=0;
    
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(isPrime(a[i])){
            freq[a[i]]++;
        }
    }

    for(auto it:freq){
        if(it.second>1){
            sum+=it.first;
        }
    }
    cout<<sum;
}