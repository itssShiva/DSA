#include<iostream>
using namespace std;
int main(){
    int rows=4;
    int space=2*(rows-1);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int s=1;s<=space;s++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}