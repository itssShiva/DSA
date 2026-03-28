#include<bits/stdc++.h>
using namespace std;

    bool printF(int i,vector<int>&ds,int s,int arr[],int k,int n){
        if(i==n){
            if(s==k){
                for(auto it:ds) cout<<it<<" ";
                return true;
            }
           else  return false;    
        }
        ds.push_back(arr[i]);
        s+=arr[i];
       if(printF(i+1,ds,s,arr,k,n)==true) return true;
        ds.pop_back();
        s-=arr[i];
        if(printF(i+1,ds,s,arr,k,n)==true) return true;
        return false;
    }


int main(){
    int n=3;
    int arr[]={1,2,1};
    int s=0;
    vector<int>ds;
    int k=2;
    printF(0,ds,s,arr,k,n);
}