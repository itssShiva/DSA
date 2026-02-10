#include<iostream>
#include <vector>
using namespace std;
vector<int> divisors(int n) {
        vector<int>result;;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                result.push_back(i);  
            }
        }
        return result;
    }
    int main(){
        int n=8;
        vector<int>result=divisors(n);
        for(auto it=result.begin();it!=result.end();it++)
        {
            cout<<*(it);
        }
    }