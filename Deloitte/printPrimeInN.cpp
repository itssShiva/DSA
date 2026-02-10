#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1||n==0) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    string numbers;
    cin>>numbers;
    int len=numbers.length();
    vector<int>temp;
    for(int i=0;i<len;i++){
        string res="";
        for(int j=i;j<len;j++){
            res+=numbers[j];
            int val=stoi(res);
            if(isPrime(val)){
                temp.push_back(val);
            }
        }
    }
    sort(temp.begin(),temp.end());
    for(auto it:temp){
        cout<<it<<" ";
    }
}