#include <iostream>
using namespace std;
int main()
{
    int a, b, n, oa, i, pos = 0;
    cin >> a >> b >> n;
    for (int i = 0; i < 10; i++)
    {
        oa = (a * 10 + i);
        if (oa % b == 0)
        {
            cout << oa << string(n - 1, '0');
            pos = 1;
            break;
        }
    }
    if (pos == 0)
        cout << -1 << endl;
    return 0;
}