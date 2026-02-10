#include<iostream>
using namespace std;
int main(){
    int n=5;
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<fact;
}