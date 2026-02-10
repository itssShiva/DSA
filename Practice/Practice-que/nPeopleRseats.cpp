#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0||n==1)return 1;
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int N=6,R=4;
    int people=(factorial(N))/(factorial(N-R));
    cout<<"N people in R seats: "<<people;
}