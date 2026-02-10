//  Given number n, output n with each digit multiplied by 2 (concatenated).
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    vector<int>temp;
    string answer="";
    while(n!=0){
        int digit=n%10;
        digit*=2;
        temp.push_back(digit);
        n/=10;
    }
    reverse(temp.begin(),temp.end());
    for(auto it:temp){
        answer+=to_string(it);
    }
    int result=stoi(answer);
    cout<<result;
}