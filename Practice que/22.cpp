// Count number of odd digits in a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int count=0;
    while(n!=0){
        int digit=n%10;
        if(digit%2!=0){
            count++;
        }
        n/=10;
    }
    cout<<count;
}