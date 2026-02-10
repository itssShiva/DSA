#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num1 = 1, den1 = 5, num2 = 2, den2 = 3, num3, den3;
    den3=(den1*den2)/__gcd(den1,den2);
     num3=(den3/den1)*num1+(den3/den2)*num2;
     int gcd=__gcd(num3,den3);
     den3=den3/gcd;
     num3=num3/gcd;

    cout<<num3<<"/"<<den3<<endl;
}