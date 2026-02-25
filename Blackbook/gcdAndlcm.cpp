#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int findgcd(int a, int b) {
        if(b == 0) return a;
        return findgcd(b, a % b);
    }

    vector<long long> lcmAndGcd(int a, int b) {
        int g = findgcd(a, b);
        long long lcm = 1LL * a * b / g; 
        return {lcm, g};
    }
};

int main() {
    Solution sol;
    int a, b;
    cin >> a >> b;

    vector<long long> res = sol.lcmAndGcd(a, b);
    cout << "LCM: " << res[0] << ", GCD: " << res[1] << endl;
}