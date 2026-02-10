#include<iostream>
using namespace std;

int fibonacciSeries(int n){
    if(n==0||n==1){
        return n; 
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
}
int main(){
    int n=6;
    for(int i=0;i<=n;i++){
        int term=fibonacciSeries(i);
        cout<<term<<" "  ;
      }
}