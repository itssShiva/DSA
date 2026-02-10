// Swap first and last digit of a number.
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
     cout<<"Enter number: "<<endl;
     cin>>n;
     vector<int>temp;
     
     while(n!=0){
        int digit=n%10;
        temp.push_back(digit);
        n/=10;
     }
     string result="";
     reverse(temp.begin(),temp.end());
     int s=temp.size();
     swap(temp[0],temp[s-1]);
     for(auto it:temp){
        result+=to_string(it);
     }
     int answer=stoi(result);
     cout<<answer;
     
}
