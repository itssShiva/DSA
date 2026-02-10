#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int number = x;
        while(x != 0){
            int digit = x % 10;
            sum += digit;
            x /= 10;
        }
        if(number % sum == 0){
            return sum;
        }
        return -1;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution s;
    int result = s.sumOfTheDigitsOfHarshadNumber(n);

    if(result != -1){
        cout << n << " is a Harshad Number. Sum of digits = " << result << endl;
    } else {
        cout << n << " is NOT a Harshad Number." << endl;
    }

    return 0;
}
