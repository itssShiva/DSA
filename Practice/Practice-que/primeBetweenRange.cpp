#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n<=1)return false;
    for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
    }
    return true;
}


void PrintPrimesbwrange(int a,int b){
    for(int i=a;i<=b;i++){
        if(checkPrime(i)){
            cout<<i<<endl;
        }
    }
}



int main()
{
  int a = 10, b = 20;
  PrintPrimesbwrange(a, b);
  return 0;
}