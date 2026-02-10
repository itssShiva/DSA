// Given array of numbers, output unique numbers in same order.

#include<unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[]={5,49,7,5,96,6,2,4,6,1,67};
    unordered_map<int,int>mpp;
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++){
        mpp[a[i]]++;
    }
   for(int i=0;i<s;i++){
    if(mpp[a[i]]==1){
        cout<<a[i]<<" ";
    }
   }
    

}