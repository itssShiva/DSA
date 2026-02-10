#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<5;i++){

        for(int s=0;s<(5-i);s++){
            cout<<" ";
        }
        for(char j='A';j<'A'+i;j++){
            cout<<j;  
        }
        for(char k='A'+(i-2);k>='A';k--)
        {
            cout<<k;
        }
    cout<<endl;
    }
}