#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lower = 0, upper = 0, l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (isupper(s[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        for (int i = 0; i < l; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}