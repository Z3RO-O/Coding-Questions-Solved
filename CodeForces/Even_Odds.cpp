#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (1 < k && k <= n / 2)
        {
            cout << (k - 1) * 2 + 1 << endl;
        }
        else if (k > n / 2 + 1)
        {
            cout << (k - (n / 2 + 1)) * 2 + 2 << endl;
        }
        else if (k == n / 2 + 1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else
    {
        if (k > 1 && k <= (n / 2 + 1))
        {
            cout << (k - 1) * 2 + 1 << endl;
        }
        else if (k > n / 2 + 2)
        {
            cout << (k - (n / 2 + 2)) * 2 + 2 << endl;
        }
        else if (k == n / 2 + 2)q
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}