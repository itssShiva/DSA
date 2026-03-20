#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int mini = 0;
        int maxi = 0;
        for(char ch : s){
            if(ch == '('){
                mini++;
                maxi++;
            }
            else if(ch == ')'){
                mini--;
                maxi--;
            }
            else{
                mini--;
                maxi++;
            }
            if(maxi < 0) return false;
            if(mini < 0) mini = 0;
        }
        return mini == 0;
    }
};

int main() {
    Solution obj;
    
    string s;
    cin >> s;   // input string
    
    bool result = obj.checkValidString(s);
    
    if(result) cout << "Valid String" << endl;
    else cout << "Invalid String" << endl;
    
    return 0;
}