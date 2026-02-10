// Given array, find prime numbers and return them sorted unique.
#include<iostream>
#include<set>
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
    int a[]={23,67,2,5,32,2,7,2,5,7,67};
    int n=sizeof(a)/sizeof(a[0]);
    set<int>st;
    for(int i=0;i<n;i++){
       if(isPrime(a[i])){
        st.insert(a[i]);
       }
    }
    for(auto it:st){
        cout<<it<<endl;
    }
}