#include<iostream>
using namespace std;
int main(){
    int i=1,k=1,rows=10;

    for(i;i<rows;i+=2){
        for(int s=0;s<(rows-i)/2;s++){
            cout<<" ";
        }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    }

    for(k=rows;k>0;k-=2){
        for(int s=0;s<(rows-k)/2;s++){
            cout<<" ";
        }
        for(int m=1;m<=k;m++){
            cout<<"*";
        }
        cout<<endl;
    }
}