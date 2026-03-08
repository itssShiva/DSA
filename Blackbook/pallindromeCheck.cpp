#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string k;
        for(char ch : s){
            if(isalnum(ch)){
                ch = tolower(ch);
                k += ch;
            }
        }

        int n = k.size();
        for(int i = 0; i < n/2; i++){
            if(k[i] != k[n-i-1]) 
                return false;
        }
        return true;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    if(obj.isPalindrome(s))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}