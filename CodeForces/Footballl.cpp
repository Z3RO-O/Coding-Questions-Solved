#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count = 0, found = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            count++;
            if (count == 7)
            {
                cout << "YES" << endl;
                found = 1;
                break;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && found == 0)
        {
            count++;
            if (count == 7)
            {
                cout << "YES" << endl;
                found = 1;
                break;
            }
        }
        else
        {
            count = 0;
        }
    }
    if (found == 0)
    {
        cout << "NO" << endl;
    }
    return 0;
}