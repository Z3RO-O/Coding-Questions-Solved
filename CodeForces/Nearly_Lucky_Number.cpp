#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll a;
    int count = 0, d;
    cin >> a;
    while (a > 0)
    {
        d = a % 10;
        if (d == 4 || d == 7)
        {
            count++;
        }
        a /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}