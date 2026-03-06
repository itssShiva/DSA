#include<bits/stdc++.h>
using namespace std;

int calculatePass(vector<vector<int>>mat){
    int n=mat.size();
    int m=mat[0].size();
    int cnt=0;
    for(int j=0;j<m;j++){
        double avg=0.0;
        int k=0;
        for(int i=0;i<n;i++){
            avg+=mat[i][j];
            k=i;
        }
        avg/=n;
       for(int i=0;i<n;i++){
           if(mat[i][j]>avg) cnt++;
       }
    }
    return cnt;
}
int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<int>>mat(N,vector<int>(M));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>mat[i][j];
        }
    }
    
    int cal=calculatePass(mat);
    cout<<cal;
    return 0;
}