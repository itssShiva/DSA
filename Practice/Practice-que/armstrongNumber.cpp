#include <iostream>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int cubeSum=0;
        int originalNum=n;
        while(n!=0){
            int digit=n%10;
            cubeSum+=digit*digit*digit;
            n=n/10;
        }
        return cubeSum==originalNum;
    }
};

int main() {
    Solution s;
    int num;
    cout<<"Enter the number: "<<endl;
    cin >> num;
    if(s.isArmstrong(num)) {
        cout << "Armstrong" << endl;
    } else {
        cout << "Not Armstrong" << endl;
    }
    return 0;
}
