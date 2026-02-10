#include<iostream>
using namespace std;
int main(){
    int rows=5;
    int space=rows+3;
    for(int i=0;i<rows;i++){
        for(int j=rows;j>i;j--){
            cout<<"*";
        }
        for(int j=1;j<=(2*i);j++){
            cout<<" ";
        }
         for(int j=rows;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int s=1;s<space;s++){
            cout<<" ";
            
        }
      
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
          space-=2;
        cout<<endl;
    }
}