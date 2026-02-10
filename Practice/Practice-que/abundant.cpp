#include<iostream>
using namespace std;
int main(){
    int n=21;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum>n){
        cout<<"It is an abundant number";
    }
    else{
        cout<<"It is not an abundant number";
    }
}