// check if number is armstrong
// Factorial of a given number
#include<iostream>
using namespace std;

bool armstrongNumber(int n) {
        int original=n;
        int armstrong=0;
        while(n!=0){
            int digit=n%10;
            armstrong=(digit*digit*digit)+armstrong;
            n/=10;
        }
        if(armstrong==original) return true;
        return false;
    }

 


int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
   if(armstrongNumber(n)){
    return true;
   }
  return false;
}   