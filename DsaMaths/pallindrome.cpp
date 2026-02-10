#include <iostream>
using namespace std;

bool checkPalindrome(int n) {
    int original = n;
    int digit;
    int reversedNum = 0;
    if(n<0)
    return false;
    else{

        while (n != 0) {
        digit = n % 10;

        // Overflow check
        if (reversedNum > INT32_MAX / 10 || (reversedNum == INT32_MAX / 10 && digit > 7))
            return false;
        if (reversedNum < INT32_MIN / 10 || (reversedNum == INT32_MIN / 10 && digit < -8))
            return false;

        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }
    return original == reversedNum;
    }
    
}

int main() {
    int n = -121;
    bool res = checkPalindrome(n);
    cout << (res ? "True" : "False") << endl;
    return 0;
}
