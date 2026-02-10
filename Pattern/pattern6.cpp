#include<iostream>
using namespace std;
int main(){
    int rows=10;
    for(int i=1;i<rows;i+=2){

       for(int s = 0; s < (rows - i) / 2; s++) {
            cout <<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}