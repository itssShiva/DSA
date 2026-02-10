//  Given integer, output the middle digit (for odd length), else -1.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>temp;
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        temp.push_back(digit);
        n/=10;
    }
    int s=temp.size();
    if(s%2==0) return -1;
    int middle=s/2;
    cout<<temp[middle];
    
}