//  Given array, count duplicate elements (total duplicates count).
#include<iostream>
#include<map>
using namespace std;
int main(){
    int a[]={5,12,6,4,48,54,5,4,12,6};
    map<int,int>mpp;
    int count=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        if(it.second>1){
            count++;
        }
    }
    cout<<count;
}
