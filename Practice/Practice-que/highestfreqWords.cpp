// Find word with highest number of repeated letters in string
#include <iostream>
#include <map>
#include <string>
using namespace std;

int countRepeats(string word)
{
    map<char, int> mpp;
    int repeats = 0;
    for (auto ch : word)
    {
        if (isalpha(ch))
        {
            mpp[tolower(ch)]++;
        }
    }

    for (auto it : mpp)
    {
        if (it.second > 1)
        {
            repeats++;
        }
    }
    return repeats;
}

int main()
{
    string s = "abcdefghij google microsoft";
    string word = "";
    string result = "";
    int maxRepeats = -1;
    for (int i = 0; i <= s.length(); i++)
    {
        if (i == s.size() || s[i] == ' ')
        {
            if (!word.empty())
            {

                int r = countRepeats(word);
                if (r > maxRepeats)
                {
                    maxRepeats = r;
                    result = word;
                }
                word = "";
            }
        }

        else
        {
            word += s[i];
        }
    }
    cout << result;
}