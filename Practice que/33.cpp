#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n=4;
    vector<int>temp;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                temp.push_back(i);
            }
        }
    }
    if(n>1) temp.push_back(n);
    for(auto it:temp){
        cout<<it<<endl;
    }

}