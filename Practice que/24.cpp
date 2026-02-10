// Factorial of a given number
#include<iostream>
using namespace std;

int factorial(int x){
    if(x==0||x==1) return 1;
    return x*factorial(x-1);
}

 


int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
   int result=factorial(n);
   cout<<result;
}