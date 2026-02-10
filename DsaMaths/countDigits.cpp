#include<iostream>
using namespace std;

int reverseDigit(int n){
    int count=0,digit;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
int main(){
    int n=45646545;
    int res=reverseDigit(n);
    cout<<res;
}