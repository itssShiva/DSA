//applicable for if consecutive digits are occurring then then they will be marked as single number
//APPLICABLE FOR MARKING EVERY DIGIT AS SINGLE VALUE

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="1xyz23";
    int sum=0;
    int n=str.length();
    int num=0;
    for(int i=0;i<n;i++){
       if(isdigit(str[i])){
        num=num*10+(str[i]-'0');
       }
       else{
        sum+=num;
        num=0;
       }
    }
    sum+=num;
    cout<<sum;
}