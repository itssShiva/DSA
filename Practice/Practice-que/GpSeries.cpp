#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int a=3;
    int n=2;
    int r=5;
    int sum=0;
    for(int i=1;i<=n;i++){
        int term=a*pow(r,i-1);
        sum+=term;
    }
    
    cout<<sum<<endl;
}