//  Given n, rotate digits to the left by k positions.
#include<iostream>
#include<vector>
using namespace std;

void rotateDigit(vector<int>&temp,int k){
int n=temp.size();
while(k){
    int first=temp[0];
for(int i=1;i<n;i++){
    temp[i-1]=temp[i];
}
temp[n-1]=first;
k--;
}
}

int main(){
    int n,k;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    vector<int>temp;
    cout<<"Enter the number of shifts you want? "<<endl;
    cin>>k;
    while(n!=0){
        int digit=n%10;
        temp.insert(temp.begin(),digit);
        n/=10;
    }
    rotateDigit(temp,k);
    string answer="";
    for(auto it:temp){
        answer+=to_string(it);
    }
    int result=stoi(answer);
    cout<<result;
}