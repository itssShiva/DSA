#include<bits/stdc++.h>
using namespace std;

    void printF(int i,vector<int>&ds,int s,int arr[],int k,int n){
        if(i==n){
            if(s==k){
                for(auto it:ds) cout<<it<<" ";
            }
            cout<<endl;
            return ;
        }
        ds.push_back(arr[i]);
        s+=arr[i];
        printF(i+1,ds,s,arr,k,n);
        ds.pop_back();
        s-=arr[i];
        printF(i+1,ds,s,arr,k,n);
    }


int main(){
    int n=3;
    int arr[]={1,2,1};
    int s=0;
    vector<int>ds;
    int k=2;
    printF(0,ds,s,arr,k,n);
}