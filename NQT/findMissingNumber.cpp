#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int>&num){
    int n=num.size();
    int sum=accumulate(num.begin(),num.end(),0);
    int max=*max_element(num.begin(),num.end());
    int res=(max*(max+1))/2;
    
        int missing=res-sum;
        return missing;
}


int main(){
    int n;
    cin>>n;
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            cin>>temp[i];
        }
        int num=findMissing(temp);
        cout<<num;
}