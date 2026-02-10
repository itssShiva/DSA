#include<iostream>
using namespace std;

bool isAutomorphic(int n){
    int squareNum=n*n;
    while(n!=0){
       if(n%10!=squareNum%10){
        return false;
       }
       n/=10;
       squareNum/=10;
    }
    return true;
}



int main() {
  int N = 76;
  if(isAutomorphic(N))
  cout<<"Automorphic Number"<<endl;
  else
  cout<<"Not Automorphic Number"<<endl;
  return 0;
}