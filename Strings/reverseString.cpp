#include<iostream>
#include<String>
using namespace std;
void reverseString(string &s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }

}
int main(){
    string s="shiva";
    reverseString(s);
    cout<<s;
}