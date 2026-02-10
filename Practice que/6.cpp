// Given n, output the sum of its digits.
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
     cout<<"Enter number: "<<endl;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        sum+=digit;
        n/=10;
    }
    cout<<sum;
}