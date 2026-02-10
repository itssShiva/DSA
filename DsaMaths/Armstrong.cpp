#include<iostream>
using namespace std;

bool checkArmstrong(int n){
    int digit,sum=0,original=n;
    while (n!=0)
    {
       digit=n%10;
       sum+=digit*digit*digit;
       n/=10;
    }
    return original==sum;
    
}
int main(){
    int n=12;
    int res=checkArmstrong(n);
    cout<<(res?"True":"False");
}