#include<iostream>
using namespace std;
int main(){
    int rows=5;
    int space1=8;
    int space2=0;
    for(int i=0;i<rows;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=space1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space1-=2;
        cout<<endl;
        }
        for(int i=1;i<=rows-1;i++){
            for(int j=rows;j>i;j--){
                cout<<"*";
            }
        for(int s=0;s<=space2;s++){
            cout<<" ";
            
        }
        for(int j=rows;j>i;j--){
            cout<<"*";
        }
            space2+=2;
            cout<<endl;
        }
       
    }
