#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m, a, b;
    long long vs = 0, pt = 0;
    map<int, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a] = i;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b;
        vs += mp[b] + 1;
        pt += n - mp[b];
    }
    cout << vs << " " << pt;
    return 0;
}