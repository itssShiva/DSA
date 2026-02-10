#include<iostream>
using namespace std;

bool isPalindrome(int i){
    int reverseDigit=0;
    int number=i;
    while(i!=0){
        int digit=i%10;
        reverseDigit=reverseDigit*10+digit;
        i=i/10;
    }
    return reverseDigit==number;
}


int main()
{
    int min = 100;
    int max = 150;
    for(int i=min; i<=max; i++) {
        if(isPalindrome(i)) {
            cout<<i <<" ";
        }
    }    
    return 0;
}