#include<iostream>
using namespace std;

void printNumbers(int n){
    if(n>=1){
        cout<<n<<endl;
        printNumbers(n-1);
    }
}
int main(){
    int n=5;
    printNumbers(n);
}