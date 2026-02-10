#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int x){
    if(x<2)return false;
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    // int n=74;
    int n=2;
    bool isFound=false;
    vector<int>v;
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            v.push_back(i);
        }
    }
   for(int k=0;k<v.size();k++){
    for(int l=k;l<v.size();l++){
        if((v[k]+v[l])==n){
            cout<<"True";
           isFound=true;
           break;
        }
    }
    if(isFound){
        break;
    }
   }
if(!isFound){
    cout<<"False";
}
    
}