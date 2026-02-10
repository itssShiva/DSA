#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Microsoft Teamsdgdfg";
    int max_len = 0, curr_len = 0;
    int max_start = 0, curr_start = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {   
            curr_len = i - curr_start;
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = curr_start;
            }
            curr_start = i + 1; 
        }
    }

    cout << s.substr(max_start, max_len);
    return 0;
}
