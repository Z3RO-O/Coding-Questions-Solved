#include <iostream>
using namespace std;
int main()
{
    int found = 0;
    string p, lang = "HQ9+";
    cin >> p;
    // Output comes from print statements only
    for (int j = 0; j < p.size(); j++)
    {
        if (p[j] >= 33 && p[j] <= 126)
        {
            if (lang[0] == p[j] || lang[1] == p[j] || lang[2] == p[j])
            {
                cout << "YES" << endl;
                found = 1;
                break;
            }
        }
    }
    if (found == 0)
    {
        cout << "NO" << endl;
    }
    return 0;
}