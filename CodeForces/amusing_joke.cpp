#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string guest, host, pile, combo;
    cin >> guest;
    cin >> host;
    cin >> pile;
    sort(pile.begin(), pile.end());
    combo = guest + host;
    sort(combo.begin(), combo.end());
    if (pile == combo)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}