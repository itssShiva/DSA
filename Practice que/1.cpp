//  1. Given n, output the number formed by repeating its last digit three times. (e.g., 14 ->  444)

#include<iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int result;
    cout<<"Enter the number: "<<endl;
    cin>>n;
        digit=n%10;
        result=(digit*100)+(digit*10)+digit;
    cout<<result;
}