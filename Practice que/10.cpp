//  Given an integer, output the digit-frequency table (0-9)
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers: "<<endl;
    cin>>n;
    unordered_map<int,int>mpp;
    while(n!=0){
        int digit=n%10;
        mpp[digit]++;
        n/=10;
    }
    for(auto it:mpp){
        cout<<it.first<<"=>"<<it.second<<endl;
    }
}