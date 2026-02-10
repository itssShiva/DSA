#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}