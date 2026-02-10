//  Given a two-digit number ab, output ba (reverse digits).
#include<iostream>
using namespace std;
int main(){
    int n;
    int reverseNum=0;
    cout<<"Enter number: "<<endl;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        reverseNum=reverseNum*10+digit;
        n/=10;
    }
    cout<<reverseNum;
}