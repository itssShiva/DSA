//  Given a 3-digit number, replace middle digit with 0 and print new number.
// Given n, output the sum of its digits.
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 1st approach
int main(){
    int n;
     cout<<"Enter number: "<<endl;
    cin>>n;
    vector<int>temp;
    int result;
    string answer="";
    while(n!=0){
       int digit=n%10;
       temp.push_back(digit);
        n/=10;   
    }
    temp[1]=0;
    reverse(temp.begin(),temp.end());
    for(auto it:temp){
        answer+=to_string(it);
    }
    result=stoi(answer);
    cout<<result;
    
    
}




// 2nd approach
int main(){
    int n;
     cout<<"Enter number: "<<endl;
     cin>>n;
     int a=n/100;
     int b=(n/10)%10;
     int c=n%10;
     int result=a*100+b*0+c;
     cout<<result;
}