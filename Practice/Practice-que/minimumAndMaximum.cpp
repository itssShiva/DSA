#include<iostream>
using namespace std;
int main(){
    int n=23004;
    int smallest=INT32_MAX;
    int largest=INT32_MIN;
    while(n!=0){
        int digit=n%10;
        smallest=min(digit,smallest);
        largest=max(digit,largest);
        n/=10;
    }
    cout<<largest<<endl;
    cout<<smallest<<endl;
}