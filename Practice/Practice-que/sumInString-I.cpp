//APPLICABLE FOR MARKING EVERY DIGIT AS SINGLE VALUE

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="1xyz23";
    int sum=0;
    int n=str.length();
    for(int i=0;i<n;i++){
        str[i]=tolower(str[i]);
       
    }
    
  for(int i=0;i<n;i++){
    if((int)str[i]>=48&&(int)str[i]<=57){
            sum+=str[i]-'0';
    }
  }
    cout<<sum;
}