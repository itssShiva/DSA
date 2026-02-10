#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while (i < n) {
            int j = i + 1;
            while (j < n && chars[i] == chars[j]) {
                j++;
            }

            chars[ansIndex++] = chars[i];

            int count = j - i;
            if (count > 1) {
                string cntStr = to_string(count);
                for (char ch : cntStr) {
                    chars[ansIndex++] = ch;
                }
            }

            i = j;  
        }

        return ansIndex;
    }
};

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    Solution sol;
    int newLength = sol.compress(chars);

    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; ++i) {
        cout << chars[i] << " ";
    }
    cout << "\nNew length: " << newLength << endl;

    return 0;
}
