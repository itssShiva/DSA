//  Given two numbers, append second number's last digit to first number

#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int n1;
    cout<<"Enter the first number: "<<endl;
    cin>>n1;
    int n2;
    cout<<"Enter the second number: "<<endl;
    cin>>n2;
    int lastDigitn2=n2%10;
    string result=to_string(n1);
    result+=to_string(lastDigitn2);
    int finalResult=stoi(result);
    cout<<finalResult;

}