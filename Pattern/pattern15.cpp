#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++) {
        for(char j = 'E' - i + 1; j <= 'E'; j++) {
            cout << j;
        }
        cout << endl;
    }
}
