#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if ('A' == s[i] || 'O' == s[i] || 'Y' == s[i] || 'E' == s[i] || 'U' == s[i] || 'I' == s[i] || 'a' == s[i] || 'o' == s[i] || 'y' == s[i] || 'e' == s[i] || 'u' == s[i] || 'i' == s[i])
        {
            continue;
        }
        else
        {
            cout << '.' << char(tolower(s[i]));
        }
    }
    return 0;
}