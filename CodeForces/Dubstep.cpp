#include <iostream>
using namespace std;

int main()
{
    string s, dubstep = "WUB", org = "";
    cin >> s;
    for (int i = 0; i < s.size();)
    {
        if (s.substr(i, 3) == dubstep)
        {
            org += " ";
            i += 3;
        }
        else
        {
            org += s[i];
            i++;
        }
    }
    cout << org << endl;
    return 0;
}