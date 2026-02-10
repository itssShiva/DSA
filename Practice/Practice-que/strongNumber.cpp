#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

bool Strong_No(int n){
    int fact=0;
    int originalNum=n;
    while(n!=0){
        int digit=n%10;
        fact += factorial(digit);
        n /= 10;
    }
    return originalNum == fact;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (Strong_No(number)) {
        cout << number << " is a Strong Number." << endl;
    } else {
        cout << number << " is NOT a Strong Number." << endl;
    }

    return 0;
}
