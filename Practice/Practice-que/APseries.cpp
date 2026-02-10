#include<iostream>
using namespace std;
int main(){
    int a=2;
    int n=8;
    int d=5;
    int sum=0;
    for(int i=1;i<=n;i++){
        int term=a+(i-1)*d;
        sum+=term;
    }
    
    cout<<sum<<endl;
}