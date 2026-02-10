// Given an array, print all prime numbers in it.

#include<iostream>
#include<vector>
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
    int a[]={2,4,6,8,9,4,17};
    vector<int>temp;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){

        if (isPrime(a[i]))
        {
          temp.push_back(a[i]);
        }    

    }
    for(auto it:temp){
        cout<<it<<endl;
        }
}