#include<iostream>
using namespace std;
int main(){
    int n=470;
    int reverseNum=0;
    while(n!=0){
        int digit=n%10;
        reverseNum=reverseNum*10+digit;
        n/=10;
    }
    cout<<reverseNum;
}