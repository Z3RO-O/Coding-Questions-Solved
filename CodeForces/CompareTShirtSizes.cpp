#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int t;
    string a, b;
    cin >> t;
    while (t--)
    {
        map<char, int> ma, mb;
        cin >> a >> b;
        for (int i = 0; i < a.size(); i++)
        {
            ma[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++)
        {
            mb[b[i]]++;
        }
        if (a == b)
        {
            cout << '=' << endl;
        }
        else if (a.find('L') != string::npos && (b.find('S')) != string::npos)
        {
            cout << '>' << endl;
        }
        else if (a.find('L') != string::npos && (b.find('M')) != string::npos)
        {
            cout << '>' << endl;
        }
        else if (b.find('L') != string::npos && (a.find('S')) != string::npos)
        {
            cout << '<' << endl;
        }
        else if (b.find('L') != string::npos && (a.find('M')) != string::npos)
        {
            cout << '<' << endl;
        }
        else if (a.find('S') != string::npos && b.find('M') != string::npos)
        {
            cout << '<' << endl;
        }
        else if (a.find('M') != string::npos && b.find('S') != string::npos)
        {
            cout << '>' << endl;
        }
        else if (a.find('L') != string::npos && b.find('L') != string::npos)
        {
            if (ma['X'] > mb['X'])
            {
                cout << '>' << endl;
            }
            else
            {
                cout << '<' << endl;
            }
        }
        else if (a.find('S') != string::npos && b.find('S') != string::npos)
        {
            if (ma['X'] > mb['X'])
            {
                cout << '<' << endl;
            }
            else
            {
                cout << '>' << endl;
            }
        }
    }
    return 0;
}