#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {
        int max_divisor = INT_MIN;
        for(int i=1;i<=n1;i++){
            if(n1 % i == 0 && n2 % i == 0){
                max_divisor = max(max_divisor, i);
            }
        }
        return max_divisor;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Solution s;
    int gcd = s.GCD(a, b);

    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;

    return 0;
}
