#include<iostream>
using namespace std;
int main(){
    int rows=5;
    int start=1;
    for(int i=1;i<=rows;i++){
        if(i%2==0){
                start=0;
                
            }
            else{
                start=1;
            
            }
        for(int j=1;j<=i;j++){
            
            cout<<start;
            start=1-start;
            
        }
        cout<<endl;
    }
}