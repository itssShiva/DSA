#include<iostream>
using namespace std;

void printSomething(int n){
    string something="Freefire";
    cout<<something<<endl;
    if(n>1)
    printSomething(n-1);
}

int main(){
    int n=5;
    printSomething(n);
}