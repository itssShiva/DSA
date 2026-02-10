// Largest digit in a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int largest=-1;;
    while(n!=0){
        int digit=n%10;
        largest=max(largest,digit);
        n/=10;
    }
    cout<<largest;
}