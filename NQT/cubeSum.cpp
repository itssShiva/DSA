#include<bits/stdc++.h>
using namespace std;
long long cubeSum(int n){
    long long temp = n * (n + 1) / 2;
    return temp * temp;
}
int main(){
    int ll,up;
    cin>>ll>>up;
    long long z=cubeSum(up)-cubeSum(ll-1);
   cout<<z;
}