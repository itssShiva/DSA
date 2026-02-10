#include <iostream>
#include <string>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26]={0};
    int number=0;
    int maxi=-1;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            number=s[i]-'a';
        }
        else{
            s[i]-'A';
        }
        arr[number]++;
    }
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // Read full line including spaces
    char result = getMaxOccCharacter(input);
    cout << "Most frequent alphabet character: " << result << endl;

    return 0;
}
