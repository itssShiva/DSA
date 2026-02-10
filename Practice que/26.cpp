// count number of odd elements in array
#include<iostream>
using namespace std;
int main(){
    int a[]={4,6,8,4,9,2,6,4,8,7};
    int count=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(a[i]%2!=0) count++;
    }
    cout<<count;
}