#include <iostream>
#include <string>
using namespace std;

class Solution {	
public:		
    bool palindromeCheck(string& s) {
        int n = s.length();
        for (int i = 0; i <= n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution obj;
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (obj.palindromeCheck(str)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
