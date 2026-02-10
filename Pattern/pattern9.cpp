#include<iostream>
using namespace std;
int main(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int k=rows-1;k>0;k--){
        for(int m=1;m<=k;m++){
            cout<<"*";
        }
        cout<<endl;
    }
}