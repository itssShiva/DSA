#include<iostream>
using namespace std;

int calculateFactorial(int n){
    if(n==0||n==1)
    return 1;
    else
    return n*calculateFactorial(n-1); 
}

int main(){
    int n=5;
    int result=calculateFactorial(n);
    cout<<result<<endl;
}