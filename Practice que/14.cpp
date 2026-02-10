// Given number, remove all occurrences of digit 0 and print result.
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    vector<int>temp;
    string result="";
    while(n!=0){
        int digit=n%10;
        if(digit!=0){
            temp.push_back(digit);
        }
        
        n/=10;
    }
    reverse(temp.begin(),temp.end());
    for(auto it:temp){
        result+=to_string(it);
    }
    int answer=stoi(result);
    cout<<answer;
}