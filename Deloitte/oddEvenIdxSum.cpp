#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int len=s.length();
    s=s.substr(1,len-2);
    vector<int>temp;
    string token;
    stringstream ss(s);
    while(getline(ss,token,',')){
        int num=stoi(token);
        temp.push_back(num);
    }
    int evenSum=0,oddSum=0;
    for(int i=0;i<temp.size();i++){
        if(i==0||i%2==0){
            evenSum+=temp[i];
        }
        else{
            oddSum+=temp[i];
        }
    }
    cout<<"Even index positions sum:"<<evenSum<<endl;
    cout<<"Odd index positions sum:"<<oddSum<<endl;
}