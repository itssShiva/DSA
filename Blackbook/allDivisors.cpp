#include<bits/stdc++.h>
using namespace std;
    void print_divisors(int n) {
        vector<int>temp;
        for(int i=1;i*i<=n;i++){
            if(n%i==0) {
                temp.push_back(i);
                if(i!=n/i) temp.push_back(n/i);
            }
            
        }
        sort(temp.begin(),temp.end());
        for(int el:temp){
            cout<<el<<" ";
        }
    }

    int main(){
        int n;
        cin>>n;
        print_divisors(n);
    }
