#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="I AM IRON MAN";
    int n=str.length();
    for(int i=0;i<n;i++){
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<(n/2);i++){
        swap(str[i],str[n-i-1]);
    }
    cout<<str;
}