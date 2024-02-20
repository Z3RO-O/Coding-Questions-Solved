#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int found = a.find('0');
    if (found != string::npos)
        cout << a.substr(0, found) + a.substr(found + 1);
    else
        cout << a.substr(1);
    return 0;
}