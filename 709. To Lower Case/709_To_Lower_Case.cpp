#include <iostream>
#include <string.h>

using namespace std;

class Solution
{
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        return s;
    }
};

int main()
{
    Solution s;
    string stringtest = "HellO";
    string result = s.toLowerCase(stringtest);
    cout << result;
    return 0;
}