// input num=11,22,33
//Output num=101,202,303

#include<iostream>
using namespace std;
int modify(int n){
    int lastdigit=n%10;
    n=lastdigit;
    n=(100*lastdigit)+lastdigit;
    return n;
}
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
   int result= modify(num);
   cout<<"Result: "<<result<<endl;
}