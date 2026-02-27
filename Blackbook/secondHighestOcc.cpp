#include<bits/stdc++.h>
using namespace std;
int secondOcc(vector<int>&temp){
   map<int,int>mpp;
    int firstEl=-1;
    int secondEl=-1;
    int firstidx=0;
    int secondidx=0;
    for(int it:temp){
        mpp[it]++;
    }
    
    for(auto it:mpp){
        if(it.second>firstidx){
            secondidx=firstidx;
            secondEl=firstEl;
            firstidx=it.second;
            firstEl=it.first;
        }
        else if(it.second<firstidx&&it.second>secondidx){
            secondidx=it.second;
            secondEl=it.first;
        }
    }
    return secondEl;
    
}

int main(){
    
    vector<int>temp={5,5,4,4,6,7};
    int res=secondOcc(temp);
    cout<<res;
    return 0;
    
}