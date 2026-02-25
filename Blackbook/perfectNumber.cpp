#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        if(num == 1) return false; // 1 is not perfect

        for(int i = 1; i*i <= num; i++){
            if(num % i == 0){
                sum += i;
                if(i != num/i && num != num/i){
                    sum += (num/i);
                }
            }
        }

        return sum == num;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    if(sol.checkPerfectNumber(n))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}