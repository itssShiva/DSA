//Capitalize first and last character of each word of a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Take u Forward is Awesome";
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }

        str[0]=toupper(str[0]);
        str[n-1]=toupper(str[n-1]);
    }
    cout<<str;
}