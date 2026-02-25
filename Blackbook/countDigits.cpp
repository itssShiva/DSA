#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    getline(cin,n);
    if(n.size()>=1){
        while(n.front()=='0') n.erase(0,1);
    }
    
   if(n.empty()){
       cout<<0;
       return 0;
   }
   cout<<n.size();
}