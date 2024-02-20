#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, f[50];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int minm = 1001;
    for (int j = 0; j < m - n + 1; j++)
    {
        minm = min(f[j + n - 1] - f[j], minm);
    }
    cout << minm << endl;
    return 0;
}