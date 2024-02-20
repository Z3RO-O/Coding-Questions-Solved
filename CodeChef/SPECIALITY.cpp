#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        if (x > y && x > z)
        {
            cout << "Setter" << endl;
        }
        else if (y > x && y > z)
        {
            cout << "Tester" << endl;
        }
        else
        {
            cout << "Editorialist" << endl;
        }
    }
    return 0;
}