#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int lcm(int n1,int n2) {
        int gcd = INT_MIN;
        int LCM = 0;
        for(int i=1;i<=n1;i++){
            if(n1 % i == 0 && n2 % i == 0){
                gcd = max(gcd, i);
            }
        }
        LCM = (n1 * n2) / gcd;
        return LCM;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Solution s;               
    int lcmValue = s.lcm(a, b);   

    cout << "LCM of " << a << " and " << b << " is: " << lcmValue << endl;

    return 0;
}
