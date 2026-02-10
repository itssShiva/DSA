#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(string s) {
    int n = s.size();
    int low = 0;
    int high = s.size() - 1;

    while (low < high) {
        while (low < high && !isalnum(s[low])) low++;
        while (low < high && !isalnum(s[high])) high--;
        if (toLowerCase(s[low]) != toLowerCase(s[high])) {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // allows spaces and punctuation

    if (checkPalindrome(input)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
