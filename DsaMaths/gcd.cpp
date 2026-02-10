#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0&&n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int n1=150;
    int n2=125;
    int res=gcd(n1,n2);
    cout<<res;

}