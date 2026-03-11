#include<bits/stdc++.h>
using namespace std;
int findOp(int p,int q,int r){
    vector<int>temp={p,q,r};
    sort(temp.begin(),temp.end());
    int step=0;
    while(true){
        temp[0]+=1;
        temp[1]+=1;
        temp[2]-=1;
        step++;
        if(temp[0]==temp[1]&&temp[1]==temp[2]) return step;
        sort(temp.begin(),temp.end());
        if(temp[0]==temp[1]&&temp[1]+1==temp[2]||temp[1]==temp[2]&&temp[0]+1==temp[1]) return -1;
    }
}


int main(){
    int p,q,r;
    cin>>p>>q>>r;
    int op=findOp(p,q,r);
    cout<<op;
    return 0;
}