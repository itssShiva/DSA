#include<bits/stdc++.h>
using namespace std;

    int printF(int i,vector<int>&ds,int s,int arr[],int k,int n){
        if(s>k) return 0;
        if(i==n){
            if(s==k){
                return 1;
            }
           else  return 0;    
        }
        ds.push_back(arr[i]);
        s+=arr[i];
       int l=printF(i+1,ds,s,arr,k,n);
        ds.pop_back();
        s-=arr[i];
        int r=printF(i+1,ds,s,arr,k,n);
        return l+r;
    }


int main(){
    int n=3;
    int arr[]={1,2,1};
    int s=0;
    vector<int>ds;
    int k=2;
    int x=printF(0,ds,s,arr,k,n);
    cout<<x;
}